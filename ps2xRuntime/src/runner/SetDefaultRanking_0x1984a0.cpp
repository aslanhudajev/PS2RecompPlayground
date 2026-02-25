#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetDefaultRanking
// Address: 0x1984a0 - 0x198574
void SetDefaultRanking_0x1984a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetDefaultRanking_0x1984a0");
#endif

    ctx->pc = 0x1984a0u;

    // 0x1984a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1984a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1984a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1984a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1984a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1984a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1984ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1984acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1984b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1984b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1984b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1984b8: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x1984bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1984bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1984c0: 0x26521610  addiu       $s2, $s2, 0x1610
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5648));
    // 0x1984c4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1984c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984cc: 0x2610a820  addiu       $s0, $s0, -0x57E0
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944800));
label_1984d0:
    // 0x1984d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1984d4: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x1984d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1984d8: 0x0  nop
    ctx->pc = 0x1984d8u;
    // NOP
    // 0x1984dc: 0x0  nop
    ctx->pc = 0x1984dcu;
    // NOP
    // 0x1984e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1984e4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1984e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x1984e8: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1984E8u;
    {
        const bool branch_taken_0x1984e8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1984ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984E8u;
            // 0x1984ec: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984e8) {
            ctx->pc = 0x1984FCu;
            goto label_1984fc;
        }
    }
    ctx->pc = 0x1984F0u;
    // 0x1984f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1984F0u;
    {
        const bool branch_taken_0x1984f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1984f0) {
            ctx->pc = 0x1984FCu;
            goto label_1984fc;
        }
    }
    ctx->pc = 0x1984F8u;
    // 0x1984f8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1984fc:
    // 0x1984fc: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1984fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x198500: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198504: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x198504u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198508: 0x0  nop
    ctx->pc = 0x198508u;
    // NOP
    // 0x19850c: 0x0  nop
    ctx->pc = 0x19850cu;
    // NOP
    // 0x198510: 0x1810  mfhi        $v1
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x198514: 0x3c020131  lui         $v0, 0x131
    ctx->pc = 0x198514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)305 << 16));
    // 0x198518: 0x34422d00  ori         $v0, $v0, 0x2D00
    ctx->pc = 0x198518u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11520u)));
    // 0x19851c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x19851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x198520: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x198520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x198524: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x198524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x198528: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x198528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x19852c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198530: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x198530u;
    SET_GPR_U32(ctx, 31, 0x198538u);
    ctx->pc = 0x198534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198530u;
            // 0x198534: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198538u; }
        if (ctx->pc != 0x198538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198538u; }
        if (ctx->pc != 0x198538u) { return; }
    }
    ctx->pc = 0x198538u;
    // 0x198538: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19853c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19853cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x198540: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x198540u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16960u)));
    // 0x198544: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x198544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x198548: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x198548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19854c: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x19854cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x198550: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x198550u;
    {
        const bool branch_taken_0x198550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198550u;
            // 0x198554: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198550) {
            ctx->pc = 0x1984D0u;
            goto label_1984d0;
        }
    }
    ctx->pc = 0x198558u;
    // 0x198558: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19855c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19855cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19856c: 0x3e00008  jr          $ra
    ctx->pc = 0x19856Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19856Cu;
            // 0x198570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1984D0u: goto label_1984d0;
            case 0x1984FCu: goto label_1984fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198574u;
}
