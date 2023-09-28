
#ifndef SERIALIZATION_DEMO_PROTO_HELPER_HPP
#define SERIALIZATION_DEMO_PROTO_HELPER_HPP

#include "Person.hpp"
#include "Person.pb.h"


namespace ais2203 {

    Person fromProto(const std::string& protoMsg) {

      proto::Person p;
      p.ParseFromString(protoMsg);

        auto &firstName = p.firstname();
        auto &lastName = p.lastname();
        std::optional<int> age;
        if (p.has_age()) age = p.age();

        return {firstName, lastName, age};
    }

    std::string toProto(const Person &p) {
        proto::Person pp;
        pp.set_firstname(p.getFirstName());
        pp.set_lastname(p.getLastName());
        auto age = p.getAge();
        if (age) {
            pp.set_age(*age);
        }

        return pp.SerializeAsString();
    }

}

#endif //SERIALIZATION_DEMO_PROTO_HELPER_HPP
