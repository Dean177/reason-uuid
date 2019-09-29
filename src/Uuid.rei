type namespace =
  | Dns
  | Url
  | Custom(string);

module V1: {[@bs.module] external make: unit => string = "uuid/v1";};

module V3: {let make: (string, namespace) => string;};

module V4: {[@bs.module] external make: unit => string = "uuid/v4";};

module V5: {let make: (string, namespace) => string;};

let make: unit => string;
