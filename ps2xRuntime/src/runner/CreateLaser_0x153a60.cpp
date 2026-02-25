#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateLaser
// Address: 0x153a60 - 0x153b30
void CreateLaser_0x153a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateLaser_0x153a60");
#endif

    ctx->pc = 0x153a60u;

    // 0x153a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153a64: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x153a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x153a68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x153a6c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x153a6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26215u)));
    // 0x153a70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x153a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a84: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x153a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153a88: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x153a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x153a8c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x153a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153a90: 0x1010  mfhi        $v0
    ctx->pc = 0x153a90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153a94: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x153a98: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x153a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153a9c: 0xc055028  jal         func_1540A0
    ctx->pc = 0x153A9Cu;
    SET_GPR_U32(ctx, 31, 0x153AA4u);
    ctx->pc = 0x153AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A9Cu;
            // 0x153aa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1540A0u;
    if (runtime->hasFunction(0x1540A0u)) {
        auto targetFn = runtime->lookupFunction(0x1540A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AA4u; }
        if (ctx->pc != 0x153AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser_0x1540a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AA4u; }
        if (ctx->pc != 0x153AA4u) { return; }
    }
    ctx->pc = 0x153AA4u;
    // 0x153aa4: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153AA4u;
    SET_GPR_U32(ctx, 31, 0x153AACu);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AACu; }
        if (ctx->pc != 0x153AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AACu; }
        if (ctx->pc != 0x153AACu) { return; }
    }
    ctx->pc = 0x153AACu;
    // 0x153aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153ab0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x153ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x153ab4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x153ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x153ab8: 0x2407ffd8  addiu       $a3, $zero, -0x28
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x153abc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x153abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x153ac0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153ac4: 0x24849940  addiu       $a0, $a0, -0x66C0
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940992));
    // 0x153ac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153acc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x153accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153ad0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x153ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153ad4: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x153ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153ad8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x153ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x153adc: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x153adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153ae0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x153ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x153ae4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x153ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x153ae8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x153ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x153aec: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x153aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x153af0: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153af4: 0xac450038  sw          $a1, 0x38($v0)
    ctx->pc = 0x153af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 5));
    // 0x153af8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153afc: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x153afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x153b00: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x153b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x153b04: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x153b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x153b08: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x153b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x153b0c: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x153b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153b14: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x153b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x153b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153b28: 0x3e00008  jr          $ra
    ctx->pc = 0x153B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153B28u;
            // 0x153b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153B30u;
}
