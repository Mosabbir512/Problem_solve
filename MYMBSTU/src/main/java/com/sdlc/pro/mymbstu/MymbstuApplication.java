package com.sdlc.pro.mymbstu;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class MymbstuApplication implements CommandLineRunner {


    public static void main(String[] args) {
        SpringApplication.run(MymbstuApplication.class, args);
    }

    @Override
    public void run(String... args) throws Exception {
        //studentDao.save(new Student( "Mosabbir", "mosabbirhossain@gmail.com",3.88f));

    }
}
