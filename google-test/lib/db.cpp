//
//  db.cpp
//  google-test
//
//  Created by wk on 7/27/2557 BE.
//  Copyright (c) 2557 wk. All rights reserved.
//

#include "db.h"
#include <stdlib.h>
#include <iostream>
//#include "mysql_connector.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;

int Connect() {
    
    sql::Driver *driver;
    sql::Connection *conn;
    sql::Statement *stmt;
    sql::ResultSet *res;
    
    driver = get_driver_instance();
    conn = driver->connect("tcp://10.0.0.77:3306", "root", "1234");
    conn->setSchema("db_aiadoc");
    
    stmt = conn->createStatement();
    res = stmt->executeQuery("SELECT * FROM user_table");
    while(res->next()){
        cout << "\t... mysql reply: ";
        cout << res->getString(2) << endl;
        cout << res->getString(3) << endl;
        cout << res->getString(4) << endl;
    }
    
    delete stmt;
    delete conn;
    
    return 0;
}
