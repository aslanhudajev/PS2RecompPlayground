#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: clearGsMem
// Address: 0x187e60 - 0x18810c
void clearGsMem_0x187e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("clearGsMem_0x187e60");
#endif

    ctx->pc = 0x187e60u;

    // 0x187e60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x187e64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x187e68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x187e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x187e6c: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x187e70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x187e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x187e74: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187e78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x187e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x187e7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187e80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187e88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x187e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187e90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x187e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187e98: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x187e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187ea0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x187ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ea4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x187ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187ea8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187eac: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x187eb0: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x187EB0u;
    SET_GPR_U32(ctx, 31, 0x187EB8u);
    ctx->pc = 0x187EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EB0u;
            // 0x187eb4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EB8u; }
        if (ctx->pc != 0x187EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EB8u; }
        if (ctx->pc != 0x187EB8u) { return; }
    }
    ctx->pc = 0x187EB8u;
    // 0x187eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ebc: 0xc04197a  jal         func_1065E8
    ctx->pc = 0x187EBCu;
    SET_GPR_U32(ctx, 31, 0x187EC4u);
    ctx->pc = 0x187EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187EBCu;
            // 0x187ec0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1065E8u;
    if (runtime->hasFunction(0x1065E8u)) {
        auto targetFn = runtime->lookupFunction(0x1065E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EC4u; }
        if (ctx->pc != 0x187EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1065e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EC4u; }
        if (ctx->pc != 0x187EC4u) { return; }
    }
    ctx->pc = 0x187EC4u;
    // 0x187ec4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187ec8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x187ec8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ecc: 0x7c20fb90  sq          $zero, -0x470($at)
    ctx->pc = 0x187eccu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294966160), GPR_VEC(ctx, 0));
    // 0x187ed0: 0xf  sync
    ctx->pc = 0x187ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x187ed4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187ed8: 0x942bfb90  lhu         $t3, -0x470($at)
    ctx->pc = 0x187ed8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966160)));
    // 0x187edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187ee0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x187ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187ee4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x187ee8: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x187ee8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x187eec: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x187eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x187ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ef4: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x187ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x187ef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x187ef8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x187efc: 0x2409ff7f  addiu       $t1, $zero, -0x81
    ctx->pc = 0x187efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x187f00: 0x251c0  sll         $t2, $v0, 7
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x187f04: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x187f04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x187f08: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f0c: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x187f0cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x187f10: 0x9027fb97  lbu         $a3, -0x469($at)
    ctx->pc = 0x187f10u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966167)));
    // 0x187f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f18: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x187f18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x187f1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x187f1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x187f20: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x187f20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187f24: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x187f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x187f28: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x187f28u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x187f2c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x187f2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x187f30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f34: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x187f34u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 5)));
    // 0x187f38: 0xa423fb90  sh          $v1, -0x470($at)
    ctx->pc = 0x187f38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966160), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f3c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x187f3cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x187f40: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f44: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x187f48: 0x902bfb91  lbu         $t3, -0x46F($at)
    ctx->pc = 0x187f48u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966161)));
    // 0x187f4c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f50: 0x9025fb98  lbu         $a1, -0x468($at)
    ctx->pc = 0x187f50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966168)));
    // 0x187f54: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f58: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x187f58u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x187f5c: 0xa027fb97  sb          $a3, -0x469($at)
    ctx->pc = 0x187f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966167), (uint8_t)GPR_U32(ctx, 7));
    // 0x187f60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x187f60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x187f64: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x187f64u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 9)));
    // 0x187f68: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f6c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x187f6cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 10)));
    // 0x187f70: 0xa027fb91  sb          $a3, -0x46F($at)
    ctx->pc = 0x187f70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966161), (uint8_t)GPR_U32(ctx, 7));
    // 0x187f74: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187f78: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F78u;
    {
        const bool branch_taken_0x187f78 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x187F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F78u;
            // 0x187f7c: 0xa023fb98  sb          $v1, -0x468($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f78) {
            ctx->pc = 0x187F88u;
            goto label_187f88;
        }
    }
    ctx->pc = 0x187F80u;
    // 0x187f80: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x187f84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_187f88:
    // 0x187f88: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x187f8c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x187F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F8Cu;
            // 0x187f90: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187F9Cu;
            goto label_187f9c;
        }
    }
    ctx->pc = 0x187F94u;
    // 0x187f94: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x187f98: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_187f9c:
    // 0x187f9c: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x187f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x187fa0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187FA0u;
    {
        const bool branch_taken_0x187fa0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FA0u;
            // 0x187fa4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fa0) {
            ctx->pc = 0x187FB0u;
            goto label_187fb0;
        }
    }
    ctx->pc = 0x187FA8u;
    // 0x187fa8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x187fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x187fac: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x187facu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_187fb0:
    // 0x187fb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x187fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x187fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fb8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x187fbc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x187fc0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x187fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187fc4: 0x2484fba0  addiu       $a0, $a0, -0x460
    ctx->pc = 0x187fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
    // 0x187fc8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x187fc8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x187fcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fd0: 0xc042cc8  jal         func_10B320
    ctx->pc = 0x187FD0u;
    SET_GPR_U32(ctx, 31, 0x187FD8u);
    ctx->pc = 0x187FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FD0u;
            // 0x187fd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B320u;
    if (runtime->hasFunction(0x10B320u)) {
        auto targetFn = runtime->lookupFunction(0x10B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FD8u; }
        if (ctx->pc != 0x187FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDrawEnv_0x10b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FD8u; }
        if (ctx->pc != 0x187FD8u) { return; }
    }
    ctx->pc = 0x187FD8u;
    // 0x187fd8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187fdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fe0: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x187FE0u;
    SET_GPR_U32(ctx, 31, 0x187FE8u);
    ctx->pc = 0x187FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FE0u;
            // 0x187fe4: 0xfc20fbc0  sd          $zero, -0x440($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 4294966208), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FE8u; }
        if (ctx->pc != 0x187FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FE8u; }
        if (ctx->pc != 0x187FE8u) { return; }
    }
    ctx->pc = 0x187FE8u;
    // 0x187fe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187fec: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x187FECu;
    SET_GPR_U32(ctx, 31, 0x187FF4u);
    ctx->pc = 0x187FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FECu;
            // 0x187ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF4u; }
        if (ctx->pc != 0x187FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF4u; }
        if (ctx->pc != 0x187FF4u) { return; }
    }
    ctx->pc = 0x187FF4u;
    // 0x187ff4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x187ff8: 0xc042d84  jal         func_10B610
    ctx->pc = 0x187FF8u;
    SET_GPR_U32(ctx, 31, 0x188000u);
    ctx->pc = 0x187FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FF8u;
            // 0x187ffc: 0x2484fb90  addiu       $a0, $a0, -0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B610u;
    if (runtime->hasFunction(0x10B610u)) {
        auto targetFn = runtime->lookupFunction(0x10B610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188000u; }
        if (ctx->pc != 0x188000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDrawEnv_0x10b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188000u; }
        if (ctx->pc != 0x188000u) { return; }
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x188004: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x188004u;
    SET_GPR_U32(ctx, 31, 0x18800Cu);
    ctx->pc = 0x188008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188004u;
            // 0x188008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (runtime->hasFunction(0x12D288u)) {
        auto targetFn = runtime->lookupFunction(0x12D288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18800Cu; }
        if (ctx->pc != 0x18800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x12d288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18800Cu; }
        if (ctx->pc != 0x18800Cu) { return; }
    }
    ctx->pc = 0x18800Cu;
    // 0x18800c: 0xc04b4a6  jal         func_12D298
    ctx->pc = 0x18800Cu;
    SET_GPR_U32(ctx, 31, 0x188014u);
    ctx->pc = 0x188010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18800Cu;
            // 0x188010: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D298u;
    if (runtime->hasFunction(0x12D298u)) {
        auto targetFn = runtime->lookupFunction(0x12D298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188014u; }
        if (ctx->pc != 0x188014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x12d298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188014u; }
        if (ctx->pc != 0x188014u) { return; }
    }
    ctx->pc = 0x188014u;
    // 0x188014: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x188018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18801c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18801cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188020: 0xc04b504  jal         func_12D410
    ctx->pc = 0x188020u;
    SET_GPR_U32(ctx, 31, 0x188028u);
    ctx->pc = 0x188024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188020u;
            // 0x188024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D410u;
    if (runtime->hasFunction(0x12D410u)) {
        auto targetFn = runtime->lookupFunction(0x12D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188028u; }
        if (ctx->pc != 0x188028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x12d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188028u; }
        if (ctx->pc != 0x188028u) { return; }
    }
    ctx->pc = 0x188028u;
    // 0x188028: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x188028u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18802c: 0xc04b528  jal         func_12D4A0
    ctx->pc = 0x18802Cu;
    SET_GPR_U32(ctx, 31, 0x188034u);
    ctx->pc = 0x188030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18802Cu;
            // 0x188030: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4A0u;
    if (runtime->hasFunction(0x12D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188034u; }
        if (ctx->pc != 0x188034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x12d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188034u; }
        if (ctx->pc != 0x188034u) { return; }
    }
    ctx->pc = 0x188034u;
    // 0x188034: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x188038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18803c: 0xc04b558  jal         func_12D560
    ctx->pc = 0x18803Cu;
    SET_GPR_U32(ctx, 31, 0x188044u);
    ctx->pc = 0x188040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18803Cu;
            // 0x188040: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188044u; }
        if (ctx->pc != 0x188044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188044u; }
        if (ctx->pc != 0x188044u) { return; }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x188044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x188048: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x188048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x18804c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18804cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x188050: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x188050u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x188054: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x188054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x188058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18805c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x18805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x188060: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x188060u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x188064: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x188064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x188068: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18806c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x188070: 0xc04b558  jal         func_12D560
    ctx->pc = 0x188070u;
    SET_GPR_U32(ctx, 31, 0x188078u);
    ctx->pc = 0x188074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188070u;
            // 0x188074: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188078u; }
        if (ctx->pc != 0x188078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188078u; }
        if (ctx->pc != 0x188078u) { return; }
    }
    ctx->pc = 0x188078u;
    // 0x188078: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x188078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18807c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188080: 0xc04b558  jal         func_12D560
    ctx->pc = 0x188080u;
    SET_GPR_U32(ctx, 31, 0x188088u);
    ctx->pc = 0x188084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188080u;
            // 0x188084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188088u; }
        if (ctx->pc != 0x188088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188088u; }
        if (ctx->pc != 0x188088u) { return; }
    }
    ctx->pc = 0x188088u;
    // 0x188088: 0x3402b400  ori         $v0, $zero, 0xB400
    ctx->pc = 0x188088u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)46080u)));
    // 0x18808c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x188090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x188090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x188094: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188098: 0xc04b558  jal         func_12D560
    ctx->pc = 0x188098u;
    SET_GPR_U32(ctx, 31, 0x1880A0u);
    ctx->pc = 0x18809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188098u;
            // 0x18809c: 0x34462d00  ori         $a2, $v0, 0x2D00 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11520u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880A0u; }
        if (ctx->pc != 0x1880A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880A0u; }
        if (ctx->pc != 0x1880A0u) { return; }
    }
    ctx->pc = 0x1880A0u;
    // 0x1880a0: 0xc04b52e  jal         func_12D4B8
    ctx->pc = 0x1880A0u;
    SET_GPR_U32(ctx, 31, 0x1880A8u);
    ctx->pc = 0x1880A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880A0u;
            // 0x1880a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4B8u;
    if (runtime->hasFunction(0x12D4B8u)) {
        auto targetFn = runtime->lookupFunction(0x12D4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880A8u; }
        if (ctx->pc != 0x1880A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x12d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880A8u; }
        if (ctx->pc != 0x1880A8u) { return; }
    }
    ctx->pc = 0x1880A8u;
    // 0x1880a8: 0xc04b4aa  jal         func_12D2A8
    ctx->pc = 0x1880A8u;
    SET_GPR_U32(ctx, 31, 0x1880B0u);
    ctx->pc = 0x1880ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880A8u;
            // 0x1880ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D2A8u;
    if (runtime->hasFunction(0x12D2A8u)) {
        auto targetFn = runtime->lookupFunction(0x12D2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880B0u; }
        if (ctx->pc != 0x1880B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x12d2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880B0u; }
        if (ctx->pc != 0x1880B0u) { return; }
    }
    ctx->pc = 0x1880B0u;
    // 0x1880b0: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x1880B0u;
    SET_GPR_U32(ctx, 31, 0x1880B8u);
    ctx->pc = 0x1880B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880B0u;
            // 0x1880b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880B8u; }
        if (ctx->pc != 0x1880B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880B8u; }
        if (ctx->pc != 0x1880B8u) { return; }
    }
    ctx->pc = 0x1880B8u;
    // 0x1880b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1880b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880bc: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x1880BCu;
    SET_GPR_U32(ctx, 31, 0x1880C4u);
    ctx->pc = 0x1880C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880BCu;
            // 0x1880c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C4u; }
        if (ctx->pc != 0x1880C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880C4u; }
        if (ctx->pc != 0x1880C4u) { return; }
    }
    ctx->pc = 0x1880C4u;
    // 0x1880c4: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x1880c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1880c8: 0xc041a46  jal         func_106918
    ctx->pc = 0x1880C8u;
    SET_GPR_U32(ctx, 31, 0x1880D0u);
    ctx->pc = 0x1880CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880C8u;
            // 0x1880cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106918u;
    if (runtime->hasFunction(0x106918u)) {
        auto targetFn = runtime->lookupFunction(0x106918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880D0u; }
        if (ctx->pc != 0x1880D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x106918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880D0u; }
        if (ctx->pc != 0x1880D0u) { return; }
    }
    ctx->pc = 0x1880D0u;
    // 0x1880d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1880d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880d4: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x1880D4u;
    SET_GPR_U32(ctx, 31, 0x1880DCu);
    ctx->pc = 0x1880D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880D4u;
            // 0x1880d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880DCu; }
        if (ctx->pc != 0x1880DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880DCu; }
        if (ctx->pc != 0x1880DCu) { return; }
    }
    ctx->pc = 0x1880DCu;
    // 0x1880dc: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1880DCu;
    SET_GPR_U32(ctx, 31, 0x1880E4u);
    ctx->pc = 0x1880E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880DCu;
            // 0x1880e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880E4u; }
        if (ctx->pc != 0x1880E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880E4u; }
        if (ctx->pc != 0x1880E4u) { return; }
    }
    ctx->pc = 0x1880E4u;
    // 0x1880e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1880e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1880e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1880ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1880ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1880f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1880f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1880f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1880f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1880f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1880f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1880fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1880fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188104: 0x3e00008  jr          $ra
    ctx->pc = 0x188104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188104u;
            // 0x188108: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187F88u: goto label_187f88;
            case 0x187F9Cu: goto label_187f9c;
            case 0x187FB0u: goto label_187fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18810Cu;
}
