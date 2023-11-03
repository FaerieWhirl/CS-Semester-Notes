# Overview
1 Section 1.7 & 1.8
2 Proofs
3 Proof techniques
Vacuous and trivial proofs
Direct proofs
Proof by construction
Proof by contraposition
Proof by contradiction
Proof for equivalence
Proof with counterexamples
Proof by exhaustion
Proof by cases
Proof with uniqueness

请帮我整理 中文 笔记
# Proofs
▶ A proof is a way to derive statements from other statements.
▶ It starts with axioms (statements that are assumed in the
current context always to be true), theorems or lemmas
(statements that were proved already; the difference between
a theorem and a lemma is whether it is intended as a final
result or an intermediate tool).
▶ Less important theorems sometimes are called propositions.
▶ A corollary is a theorem that can be established directly from
a theorem that has been proved.
▶ A conjecture is a statement that is being proposed to be a
true statement, usually on the basis of some partial evidence,
a heuristic argument, or the intuition of an expert.
# Proof techniques
▶ A proof technique is a template for how to go about proving
particular classes of statements.
▶ We will introduce each technique in what follows.
# Vacuous and trivial proofs
▶ We can quickly prove that a conditional statement p → q is
true when we know that p is false, because p → q must be
true when p is false following the equivalent identity ¬p ∨ q.
Consequently, if we can show that p is false, then we have a
proof, called a vacuous proof, of the conditional statement
p → q.
▶ We can also quickly prove a conditional statement p → q if we
know that the conclusion q is true. By showing that q is true,
it follows that p → q must also be true. A proof of p → q
that uses the fact that q is true is called a trivial proof.
# Direct proofs
▶ A direct proof of a conditional statement p → q is constructed
when the first step is the assumption that p is true;
subsequent steps are constructed using rules of inference, with
the final step showing that q must also be true.
▶ To help us with the following example, we first introduce
## Definition
The integer n is even if there exists an integer k such that n = 2k,
and n is odd if there exists an integer k such that n = 2k + 1.
(Note that every integer is either even or odd, and no integer is
both even and odd.) Two integers have the same parity when both
are even or both are odd; they have opposite parity when one is
even and the other is odd.
# Proof by construction
▶ An important technique in direct proof is the proof by
construction, namely, we need to construct certain structures
based on the given conditions to complete the proof.
▶ Here we present another
## Definition
The real number r is rational if there exist integers p and q with
q ̸= 0 such that r = p/q. A real number that is not rational is
called irrational.
▶ Proofs by contraposition make use of the fact that the
conditional statement p → q is equivalent to its
contrapositive, ¬q → ¬p.
▶ In a proof by contraposition of p → q, we take ¬q as a
premise, and using axioms, definitions, and previously proven
theorems, together with rules of inference, we show that ¬p
must follow.
▶ Suppose we want to prove that a statement p is true.
Furthermore, suppose that we can find a contradiction q such
that ¬p → q is true. Because q is false, but ¬p → q is true,
we can conclude that ¬p is false, which means that p is true.
This is what we call a proof by contradiction.
# Proof for equivalence
▶ To prove a theorem that is a biconditional statement, that is,
a statement of the form p ↔ q, we show that p → q and
q → p are both true. The validity of this approach is based on
the tautology
(p ↔ q) ≡ (p → q) ∧ (q → p).
# Remark
▶ You can extend the equivalence for more propositions and
prove using the following identity
p1 ↔ p2 ↔ · · · ↔ pn ≡ (p1 → p2 )∧(p2 → p3 )∧· · ·∧(pn → p1 ) .
# Proof with counterexamples
▶ Note that when we want to prove a statement is true, we
have to follow the above techniques. But when we want to
disporve a statement, that is, to prove a statement is false, we
can simply find a counterexample.
# Proof by exhaustion
▶ Some theorems can be proved by examining a relatively small
number of examples. Such proofs are called exhaustive
proofs, or proofs by exhaustion because these proofs
proceed by exhausting all possibilities.
# Proof by cases
▶ A proof by cases must cover all possible cases that arise in a
theorem, which can be almost viewed as a special example of
the proof by exhaustion.
# Without loss of generality
▶ A special trick in demonstration by cases is to use the
“Without loss of generality”, often abbreviated as “WLOG”.
▶ We assert that by proving one case of a theorem, no
additional argument is required to prove other specified cases.
This normally happens in cases where assumptions are
symmetric, or some assumptions can be implied from others.
# Proof with uniqueness
▶ In many theorems, we will see the statement involves the
uniqueness, proving which normally requires two parts:
existence proof and uniqueness proof.
▶ In more details, we can find
Existence: We show that an element x with the desired
property exists.
Uniqueness: We show that if y ̸= x , then y does not have the
desired property. Equivalently, we can show that if x and y
both have the desired property, then x = y .
