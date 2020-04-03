type namespace =
  | Dns
  | Url
  | Custom(string);

module V1: {[@bs.module "uuid"] external make: unit => string = "v1";};

// TODO https://bucklescript.github.io/docs/en/import-export#import-a-default-value
module V3: {let make: (string, namespace) => string;};

module V4: {[@bs.module "uuid"] external make: unit => string = "v4";};

module V5: {let make: (string, namespace) => string;};

let make: unit => string;
