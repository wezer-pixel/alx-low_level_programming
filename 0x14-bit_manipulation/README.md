## C provides several operators for performing bit manipulation operations.
Here are some of the commonly used operators for bit manipulation in C:

## Bitwise AND operator (&):
This operator performs a bitwise AND operation on two operands.
The result is a value where each bit is set to 1 only if the corresponding bits of both operands are 1.
For example, if a = 0b1101 and b = 0b1011, then a & b would be 0b1001.

## Bitwise OR operator (|):
This operator performs a bitwise OR operation on two operands.
The result is a value where each bit is set to 1 if either of the corresponding bits of both operands is 1.
For example, if a = 0b1101 and b = 0b1011, then a | b would be 0b1111.

## Bitwise XOR operator (^):
This operator performs a bitwise XOR operation on two operands.
The result is a value where each bit is set to 1 only if the corresponding bits of both operands are different.
For example, if a = 0b1101 and b = 0b1011, then a ^ b would be 0b0110.

## Bitwise NOT operator (~):
This operator performs a bitwise NOT operation on a single operand.
The result is a value where each bit is inverted (i.e., 1 becomes 0 and 0 becomes 1).
For example, if a = 0b1101, then ~a would be 0b0010.

## Left shift operator (<<):
This operator performs a left shift operation on a single operand.
The result is a value where each bit is shifted to the left by a specified number of positions.
For example, if a = 0b1101 and we shift it left by 2 positions using the operator a << 2, then the result would be 0b110100.

## Right shift operator (>>):
This operator performs a right shift operation on a single operand.
The result is a value where each bit is shifted to the right by a specified number of positions.
For example, if a = 0b1101 and we shift it right by 2 positions using the operator a >> 2, then the result would be 0b0011.

These operators can be combined with other C operators and control flow statements to perform a wide range of bit manipulation tasks.
For example, they can be used to extract specific bits from a value, set or clear individual bits, and implement various bitwise algorithms.
