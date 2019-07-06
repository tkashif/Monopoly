cmake_minimum_required(VERSION 3.13)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Player.cpp Player.h Board.cpp Board.h Space.cpp Space.h BuyableSpace.cpp BuyableSpace.h
        NonBuyableSpace.cpp NonBuyableSpace.h PropertySpace.cpp PropertySpace.h RailroadSpace.cpp RailroadSpace.h
        UtilitySpace.cpp UtilitySpace.h TaxSpace.cpp TaxSpace.h IncomeTaxSpace.cpp IncomeTaxSpace.h LuxuryTaxSpace.cpp
        LuxuryTaxSpace.h GOSpace.cpp GOSpace.h GoToJailSpace.cpp GoToJailSpace.h JailSpace.cpp JailSpace.h
        FreeParkingSpace.cpp FreeParkingSpace.h Dice.cpp Dice.h Piece.cpp Piece.h View.cpp View.h GameAttributes.cpp GameAttributes.h
        Controller.cpp Controller.h)