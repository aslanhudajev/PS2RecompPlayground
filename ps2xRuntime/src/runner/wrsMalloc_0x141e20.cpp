#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsMalloc
// Address: 0x141e20 - 0x142030
void wrsMalloc_0x141e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsMalloc_0x141e20");
#endif

    ctx->pc = 0x141e20u;

    // 0x141e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x141e24: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141e28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x141e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x141e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x141e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x141e34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x141e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141e3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x141e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141e44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x141e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141e4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x141e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e50: 0x8c227938  lw          $v0, 0x7938($at)
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31032)));
    // 0x141e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141E54u;
    {
        const bool branch_taken_0x141e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E54u;
            // 0x141e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e54) {
            ctx->pc = 0x141E68u;
            goto label_141e68;
        }
    }
    ctx->pc = 0x141E5Cu;
    // 0x141e5c: 0xc050870  jal         func_1421C0
    ctx->pc = 0x141E5Cu;
    SET_GPR_U32(ctx, 31, 0x141E64u);
    ctx->pc = 0x1421C0u;
    if (runtime->hasFunction(0x1421C0u)) {
        auto targetFn = runtime->lookupFunction(0x1421C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E64u; }
        if (ctx->pc != 0x141E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocLinkCheck_0x1421c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E64u; }
        if (ctx->pc != 0x141E64u) { return; }
    }
    ctx->pc = 0x141E64u;
    // 0x141e64: 0x0  nop
    ctx->pc = 0x141e64u;
    // NOP
label_141e68:
    // 0x141e68: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141e6c: 0x8c2279f8  lw          $v0, 0x79F8($at)
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31224)));
    // 0x141e70: 0x2684000f  addiu       $a0, $s4, 0xF
    ctx->pc = 0x141e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x141e74: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x141e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x141e78: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x141e78u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x141e7c: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x141e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x141e80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x141e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x141e84: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x141E84u;
    {
        const bool branch_taken_0x141e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E84u;
            // 0x141e88: 0x3c010024  lui         $at, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e84) {
            ctx->pc = 0x141F38u;
            goto label_141f38;
        }
    }
    ctx->pc = 0x141E8Cu;
    // 0x141e8c: 0x8c227a08  lw          $v0, 0x7A08($at)
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31240)));
    // 0x141e90: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x141E90u;
    {
        const bool branch_taken_0x141e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e90) {
            ctx->pc = 0x141F38u;
            goto label_141f38;
        }
    }
    ctx->pc = 0x141E98u;
    // 0x141e98: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ea0: 0x8c2279d0  lw          $v0, 0x79D0($at)
    ctx->pc = 0x141ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31184)));
    // 0x141ea4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x141ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ea8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x141ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141eac: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x141eacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x141eb0: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x141eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x141eb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x141eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141eb8: 0x2279021  addu        $s2, $s1, $a3
    ctx->pc = 0x141eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x141ebc: 0xc05080c  jal         func_142030
    ctx->pc = 0x141EBCu;
    SET_GPR_U32(ctx, 31, 0x141EC4u);
    ctx->pc = 0x141EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EBCu;
            // 0x141ec0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142030u;
    if (runtime->hasFunction(0x142030u)) {
        auto targetFn = runtime->lookupFunction(0x142030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EC4u; }
        if (ctx->pc != 0x141EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderInit_0x142030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EC4u; }
        if (ctx->pc != 0x141EC4u) { return; }
    }
    ctx->pc = 0x141EC4u;
    // 0x141ec4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141ec8: 0x8c2279d0  lw          $v0, 0x79D0($at)
    ctx->pc = 0x141ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31184)));
    // 0x141ecc: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x141eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x141ed0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141ed4: 0x8c2279d0  lw          $v0, 0x79D0($at)
    ctx->pc = 0x141ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31184)));
    // 0x141ed8: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x141ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x141edc: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141ee0: 0x8c2279d8  lw          $v0, 0x79D8($at)
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31192)));
    // 0x141ee4: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x141ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x141ee8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141eec: 0x8c2279d8  lw          $v0, 0x79D8($at)
    ctx->pc = 0x141eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31192)));
    // 0x141ef0: 0xc05084c  jal         func_142130
    ctx->pc = 0x141EF0u;
    SET_GPR_U32(ctx, 31, 0x141EF8u);
    ctx->pc = 0x141EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EF0u;
            // 0x141ef4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142130u;
    if (runtime->hasFunction(0x142130u)) {
        auto targetFn = runtime->lookupFunction(0x142130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EF8u; }
        if (ctx->pc != 0x141EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemoryBetweenSearch_0x142130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141EF8u; }
        if (ctx->pc != 0x141EF8u) { return; }
    }
    ctx->pc = 0x141EF8u;
    // 0x141ef8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141efc: 0x8c227a00  lw          $v0, 0x7A00($at)
    ctx->pc = 0x141efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x141f00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141f04: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f08: 0xac227a00  sw          $v0, 0x7A00($at)
    ctx->pc = 0x141f08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 2));
    // 0x141f0c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x141f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x141f10: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f14: 0x8c227930  lw          $v0, 0x7930($at)
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31024)));
    // 0x141f18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141F18u;
    {
        const bool branch_taken_0x141f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f18) {
            ctx->pc = 0x141F30u;
            goto label_141f30;
        }
    }
    ctx->pc = 0x141F20u;
    // 0x141f20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x141f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141f24: 0xc050a4c  jal         func_142930
    ctx->pc = 0x141F24u;
    SET_GPR_U32(ctx, 31, 0x141F2Cu);
    ctx->pc = 0x141F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141F24u;
            // 0x141f28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142930u;
    if (runtime->hasFunction(0x142930u)) {
        auto targetFn = runtime->lookupFunction(0x142930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F2Cu; }
        if (ctx->pc != 0x141F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMallocWreckageAlloc_0x142930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F2Cu; }
        if (ctx->pc != 0x141F2Cu) { return; }
    }
    ctx->pc = 0x141F2Cu;
    // 0x141f2c: 0x0  nop
    ctx->pc = 0x141f2cu;
    // NOP
label_141f30:
    // 0x141f30: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x141F30u;
    {
        const bool branch_taken_0x141f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F30u;
            // 0x141f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f30) {
            ctx->pc = 0x142010u;
            goto label_142010;
        }
    }
    ctx->pc = 0x141F38u;
label_141f38:
    // 0x141f38: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f3c: 0x8c2279f0  lw          $v0, 0x79F0($at)
    ctx->pc = 0x141f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31216)));
    // 0x141f40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x141f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x141f44: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x141F44u;
    {
        const bool branch_taken_0x141f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F44u;
            // 0x141f48: 0x3c010024  lui         $at, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f44) {
            ctx->pc = 0x141FF0u;
            goto label_141ff0;
        }
    }
    ctx->pc = 0x141F4Cu;
    // 0x141f4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x141f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f50: 0x8c2279e0  lw          $v0, 0x79E0($at)
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x141f54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x141f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f5c: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x141f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x141f60: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x141f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x141f64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x141f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f68: 0x2678821  addu        $s1, $s3, $a3
    ctx->pc = 0x141f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x141f6c: 0xc05080c  jal         func_142030
    ctx->pc = 0x141F6Cu;
    SET_GPR_U32(ctx, 31, 0x141F74u);
    ctx->pc = 0x141F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141F6Cu;
            // 0x141f70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142030u;
    if (runtime->hasFunction(0x142030u)) {
        auto targetFn = runtime->lookupFunction(0x142030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F74u; }
        if (ctx->pc != 0x141F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderInit_0x142030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F74u; }
        if (ctx->pc != 0x141F74u) { return; }
    }
    ctx->pc = 0x141F74u;
    // 0x141f74: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f78: 0x8c2279e0  lw          $v0, 0x79E0($at)
    ctx->pc = 0x141f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x141f7c: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x141f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x141f80: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f84: 0x8c2279e0  lw          $v0, 0x79E0($at)
    ctx->pc = 0x141f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31200)));
    // 0x141f88: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x141f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x141f8c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f90: 0xac3179e0  sw          $s1, 0x79E0($at)
    ctx->pc = 0x141f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31200), GPR_U32(ctx, 17));
    // 0x141f94: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141f98: 0x8c227a00  lw          $v0, 0x7A00($at)
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31232)));
    // 0x141f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141fa0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141fa4: 0xac227a00  sw          $v0, 0x7A00($at)
    ctx->pc = 0x141fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31232), GPR_U32(ctx, 2));
    // 0x141fa8: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x141fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x141fac: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141fb0: 0x8c247a10  lw          $a0, 0x7A10($at)
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31248)));
    // 0x141fb4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141fb8: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x141fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x141fbc: 0x8c237a18  lw          $v1, 0x7A18($at)
    ctx->pc = 0x141fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31256)));
    // 0x141fc0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141fc4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x141fc8: 0x8c227930  lw          $v0, 0x7930($at)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31024)));
    // 0x141fcc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x141fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x141fd0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141FD4u;
    {
        const bool branch_taken_0x141fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141FD4u;
            // 0x141fd8: 0xac2379f0  sw          $v1, 0x79F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fd4) {
            ctx->pc = 0x141FE8u;
            goto label_141fe8;
        }
    }
    ctx->pc = 0x141FDCu;
    // 0x141fdc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141fe0: 0xc050a4c  jal         func_142930
    ctx->pc = 0x141FE0u;
    SET_GPR_U32(ctx, 31, 0x141FE8u);
    ctx->pc = 0x141FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141FE0u;
            // 0x141fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142930u;
    if (runtime->hasFunction(0x142930u)) {
        auto targetFn = runtime->lookupFunction(0x142930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141FE8u; }
        if (ctx->pc != 0x141FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMallocWreckageAlloc_0x142930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141FE8u; }
        if (ctx->pc != 0x141FE8u) { return; }
    }
    ctx->pc = 0x141FE8u;
label_141fe8:
    // 0x141fe8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x141FE8u;
    {
        const bool branch_taken_0x141fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141FE8u;
            // 0x141fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fe8) {
            ctx->pc = 0x142010u;
            goto label_142010;
        }
    }
    ctx->pc = 0x141FF0u;
label_141ff0:
    // 0x141ff0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141ff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x141ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ff8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x141ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ffc: 0x24840860  addiu       $a0, $a0, 0x860
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2144));
    // 0x142000: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142000u;
    SET_GPR_U32(ctx, 31, 0x142008u);
    ctx->pc = 0x142004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142000u;
            // 0x142004: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142008u; }
        if (ctx->pc != 0x142008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142008u; }
        if (ctx->pc != 0x142008u) { return; }
    }
    ctx->pc = 0x142008u;
    // 0x142008: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14200c: 0x0  nop
    ctx->pc = 0x14200cu;
    // NOP
label_142010:
    // 0x142010: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14201c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14201cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142028: 0x3e00008  jr          $ra
    ctx->pc = 0x142028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142028u;
            // 0x14202c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141E68u: goto label_141e68;
            case 0x141F30u: goto label_141f30;
            case 0x141F38u: goto label_141f38;
            case 0x141FE8u: goto label_141fe8;
            case 0x141FF0u: goto label_141ff0;
            case 0x142010u: goto label_142010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142030u;
}
