#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateItem
// Address: 0x196510 - 0x1965b8
void CreateItem_0x196510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateItem_0x196510");
#endif

    ctx->pc = 0x196510u;

    // 0x196510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196514: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x196518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19651c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19652c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19652cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196530: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196534: 0x28610400  slti        $at, $v1, 0x400
    ctx->pc = 0x196534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x196538: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x196538u;
    {
        const bool branch_taken_0x196538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196538u;
            // 0x19653c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196538) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x196540u;
    // 0x196540: 0xc065c70  jal         func_1971C0
    ctx->pc = 0x196540u;
    SET_GPR_U32(ctx, 31, 0x196548u);
    ctx->pc = 0x1971C0u;
    if (runtime->hasFunction(0x1971C0u)) {
        auto targetFn = runtime->lookupFunction(0x1971C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196548u; }
        if (ctx->pc != 0x196548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemAlloc_0x1971c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196548u; }
        if (ctx->pc != 0x196548u) { return; }
    }
    ctx->pc = 0x196548u;
    // 0x196548: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x196548u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19654c: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x196550: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x196550u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196554: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x196554u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x196558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19655c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19655cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196560: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x196564: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x196568: 0x2463a6e0  addiu       $v1, $v1, -0x5920
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944480));
    // 0x19656c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196578: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x196578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19657c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x19657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x196580: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x196580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x196584: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x196584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x196588: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x196588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x19658c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196590: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x196590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x196594: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x196594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x196598: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x196598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x19659c: 0x0  nop
    ctx->pc = 0x19659cu;
    // NOP
label_1965a0:
    // 0x1965a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1965a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1965a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1965a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1965a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1965ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1965acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1965b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1965B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1965B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1965B0u;
            // 0x1965b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1965A0u: goto label_1965a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1965B8u;
}
