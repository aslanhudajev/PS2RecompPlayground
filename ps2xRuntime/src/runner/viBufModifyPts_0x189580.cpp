#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufModifyPts
// Address: 0x189580 - 0x189718
void viBufModifyPts_0x189580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufModifyPts_0x189580");
#endif

    ctx->pc = 0x189580u;

    // 0x189580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189584: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x189584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x189588: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18958c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189590: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x189590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189594: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189598: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x189598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18959c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1895a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1895a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1895a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1895a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1895a8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1895ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1895b0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1895b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1895b4: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1895b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1895b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1895bc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1895c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1895c4: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1895c4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1895c8: 0x0  nop
    ctx->pc = 0x1895c8u;
    // NOP
    // 0x1895cc: 0x0  nop
    ctx->pc = 0x1895ccu;
    // NOP
    // 0x1895d0: 0x9010  mfhi        $s2
    ctx->pc = 0x1895d0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1895d4: 0x18a00046  blez        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1895D4u;
    {
        const bool branch_taken_0x1895d4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1895D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1895D4u;
            // 0x1895d8: 0x28ac0  sll         $s1, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895d4) {
            ctx->pc = 0x1896F0u;
            goto label_1896f0;
        }
    }
    ctx->pc = 0x1895DCu;
    // 0x1895dc: 0x0  nop
    ctx->pc = 0x1895dcu;
    // NOP
label_1895e0:
    // 0x1895e0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1895e4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1895e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1895e8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x1895e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1895ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1895f0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1895f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1895f4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1895f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1895f8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1895F8u;
    {
        const bool branch_taken_0x1895f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1895f8) {
            ctx->pc = 0x1896F0u;
            goto label_1896f0;
        }
    }
    ctx->pc = 0x189600u;
    // 0x189600: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x189604: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x189604u;
    {
        const bool branch_taken_0x189604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x189604) {
            ctx->pc = 0x1896F0u;
            goto label_1896f0;
        }
    }
    ctx->pc = 0x18960Cu;
    // 0x18960c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x18960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x189610: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x189614: 0xc062508  jal         func_189420
    ctx->pc = 0x189614u;
    SET_GPR_U32(ctx, 31, 0x18961Cu);
    ctx->pc = 0x189618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189614u;
            // 0x189618: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189420u;
    if (runtime->hasFunction(0x189420u)) {
        auto targetFn = runtime->lookupFunction(0x189420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18961Cu; }
        if (ctx->pc != 0x18961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPtsInRegion_0x189420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18961Cu; }
        if (ctx->pc != 0x18961Cu) { return; }
    }
    ctx->pc = 0x18961Cu;
    // 0x18961c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18961Cu;
    {
        const bool branch_taken_0x18961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18961c) {
            ctx->pc = 0x1896C8u;
            goto label_1896c8;
        }
    }
    ctx->pc = 0x189624u;
    // 0x189624: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x189628: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18962c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x189630: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x189634: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189638: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x189638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18963c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x18963cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189640: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x189640u;
    {
        const bool branch_taken_0x189640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189640) {
            ctx->pc = 0x189650u;
            goto label_189650;
        }
    }
    ctx->pc = 0x189648u;
    // 0x189648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189648u;
    {
        const bool branch_taken_0x189648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189648) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x189650u;
label_189650:
    // 0x189650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189654: 0x0  nop
    ctx->pc = 0x189654u;
    // NOP
label_189658:
    // 0x189658: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18965c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x18965cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189660: 0x0  nop
    ctx->pc = 0x189660u;
    // NOP
    // 0x189664: 0x0  nop
    ctx->pc = 0x189664u;
    // NOP
    // 0x189668: 0x1010  mfhi        $v0
    ctx->pc = 0x189668u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18966c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x18966cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x189670: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x189674: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189678: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x189678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x18967c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x18967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x189680: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189680u;
    {
        const bool branch_taken_0x189680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189680) {
            ctx->pc = 0x1896D0u;
            goto label_1896d0;
        }
    }
    ctx->pc = 0x189688u;
    // 0x189688: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x189688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18968c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18968Cu;
    {
        const bool branch_taken_0x18968c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18968Cu;
            // 0x189690: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18968c) {
            ctx->pc = 0x1896A8u;
            goto label_1896a8;
        }
    }
    ctx->pc = 0x189694u;
    // 0x189694: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x189694u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x189698: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x189698u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x18969c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x18969cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1896a0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1896a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1896a4: 0x0  nop
    ctx->pc = 0x1896a4u;
    // NOP
label_1896a8:
    // 0x1896a8: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1896ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1896b0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1896B0u;
    {
        const bool branch_taken_0x1896b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1896b0) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896B8u;
    // 0x1896b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1896b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1896bc:
    // 0x1896bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1896BCu;
    {
        const bool branch_taken_0x1896bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896BCu;
            // 0x1896c0: 0xaea20058  sw          $v0, 0x58($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896bc) {
            ctx->pc = 0x1896D0u;
            goto label_1896d0;
        }
    }
    ctx->pc = 0x1896C4u;
    // 0x1896c4: 0x0  nop
    ctx->pc = 0x1896c4u;
    // NOP
label_1896c8:
    // 0x1896c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1896c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896cc: 0x0  nop
    ctx->pc = 0x1896ccu;
    // NOP
label_1896d0:
    // 0x1896d0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x1896d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1896d4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1896d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1896d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1896d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1896dc: 0x0  nop
    ctx->pc = 0x1896dcu;
    // NOP
    // 0x1896e0: 0x0  nop
    ctx->pc = 0x1896e0u;
    // NOP
    // 0x1896e4: 0x9010  mfhi        $s2
    ctx->pc = 0x1896e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1896e8: 0x1600ffbd  bnez        $s0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1896E8u;
    {
        const bool branch_taken_0x1896e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1896e8) {
            ctx->pc = 0x1895E0u;
            goto label_1895e0;
        }
    }
    ctx->pc = 0x1896F0u;
label_1896f0:
    // 0x1896f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1896f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1896f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1896f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1896f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1896f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1896fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18970c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18970cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189710: 0x3e00008  jr          $ra
    ctx->pc = 0x189710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189710u;
            // 0x189714: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1895E0u: goto label_1895e0;
            case 0x189650u: goto label_189650;
            case 0x189658u: goto label_189658;
            case 0x1896A8u: goto label_1896a8;
            case 0x1896BCu: goto label_1896bc;
            case 0x1896C8u: goto label_1896c8;
            case 0x1896D0u: goto label_1896d0;
            case 0x1896F0u: goto label_1896f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189718u;
}
