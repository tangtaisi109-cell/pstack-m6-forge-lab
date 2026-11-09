import test from 'node:test';
import assert from 'node:assert/strict';
import { greet, shout } from '../src/greeter.mjs';

test('greet returns a greeting', () => {
  assert.equal(greet('pstack'), 'Hello, pstack!');
});

test('greet trims whitespace', () => {
  assert.equal(greet('  lane  '), 'Hello, lane!');
});

test('greet rejects empty input', () => {
  assert.throws(() => greet(''), TypeError);
});

test('shout upper-cases', () => {
  assert.equal(shout('ab'), 'AB');
});
