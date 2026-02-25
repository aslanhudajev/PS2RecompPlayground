#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeExceptionTriFan
// Address: 0x117cd0 - 0x117df8
void ShapeMakeExceptionTriFan_0x117cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeExceptionTriFan_0x117cd0");
#endif

    ctx->pc = 0x117cd0u;

    // 0x117cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117cdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117ce0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117ce4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117ce8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117cec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117cf0: 0xc047188  jal         func_11C620
    ctx->pc = 0x117CF0u;
    SET_GPR_U32(ctx, 31, 0x117CF8u);
    ctx->pc = 0x117CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CF0u;
            // 0x117cf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C620u;
    if (runtime->hasFunction(0x11C620u)) {
        auto targetFn = runtime->lookupFunction(0x11C620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CF8u; }
        if (ctx->pc != 0x117CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryVertex_0x11c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CF8u; }
        if (ctx->pc != 0x117CF8u) { return; }
    }
    ctx->pc = 0x117CF8u;
    // 0x117cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d00: 0xc04718c  jal         func_11C630
    ctx->pc = 0x117D00u;
    SET_GPR_U32(ctx, 31, 0x117D08u);
    ctx->pc = 0x117D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D00u;
            // 0x117d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C630u;
    if (runtime->hasFunction(0x11C630u)) {
        auto targetFn = runtime->lookupFunction(0x11C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D08u; }
        if (ctx->pc != 0x117D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryNormal_0x11c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D08u; }
        if (ctx->pc != 0x117D08u) { return; }
    }
    ctx->pc = 0x117D08u;
    // 0x117d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x117d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d10: 0xc047194  jal         func_11C650
    ctx->pc = 0x117D10u;
    SET_GPR_U32(ctx, 31, 0x117D18u);
    ctx->pc = 0x117D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D10u;
            // 0x117d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C650u;
    if (runtime->hasFunction(0x11C650u)) {
        auto targetFn = runtime->lookupFunction(0x11C650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D18u; }
        if (ctx->pc != 0x117D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryST_0x11c650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D18u; }
        if (ctx->pc != 0x117D18u) { return; }
    }
    ctx->pc = 0x117D18u;
    // 0x117d18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d20: 0xc04719c  jal         func_11C670
    ctx->pc = 0x117D20u;
    SET_GPR_U32(ctx, 31, 0x117D28u);
    ctx->pc = 0x117D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D20u;
            // 0x117d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C670u;
    if (runtime->hasFunction(0x11C670u)) {
        auto targetFn = runtime->lookupFunction(0x11C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D28u; }
        if (ctx->pc != 0x117D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryColor_0x11c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D28u; }
        if (ctx->pc != 0x117D28u) { return; }
    }
    ctx->pc = 0x117D28u;
    // 0x117d28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117D28u;
    {
        const bool branch_taken_0x117d28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D28u;
            // 0x117d2c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d28) {
            ctx->pc = 0x117D48u;
            goto label_117d48;
        }
    }
    ctx->pc = 0x117D30u;
    // 0x117d30: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D30u;
    {
        const bool branch_taken_0x117d30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d30) {
            ctx->pc = 0x117D48u;
            goto label_117d48;
        }
    }
    ctx->pc = 0x117D38u;
    // 0x117d38: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x117D38u;
    {
        const bool branch_taken_0x117d38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d38) {
            ctx->pc = 0x117D48u;
            goto label_117d48;
        }
    }
    ctx->pc = 0x117D40u;
    // 0x117d40: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D40u;
    {
        const bool branch_taken_0x117d40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x117d40) {
            ctx->pc = 0x117D58u;
            goto label_117d58;
        }
    }
    ctx->pc = 0x117D48u;
label_117d48:
    // 0x117d48: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117D48u;
    SET_GPR_U32(ctx, 31, 0x117D50u);
    ctx->pc = 0x117D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D48u;
            // 0x117d4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D50u; }
        if (ctx->pc != 0x117D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D50u; }
        if (ctx->pc != 0x117D50u) { return; }
    }
    ctx->pc = 0x117D50u;
    // 0x117d50: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x117D50u;
    {
        const bool branch_taken_0x117d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D50u;
            // 0x117d54: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d50) {
            ctx->pc = 0x117DDCu;
            goto label_117ddc;
        }
    }
    ctx->pc = 0x117D58u;
label_117d58:
    // 0x117d58: 0xc045e2e  jal         func_1178B8
    ctx->pc = 0x117D58u;
    SET_GPR_U32(ctx, 31, 0x117D60u);
    ctx->pc = 0x117D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D58u;
            // 0x117d5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1178B8u;
    if (runtime->hasFunction(0x1178B8u)) {
        auto targetFn = runtime->lookupFunction(0x1178B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D60u; }
        if (ctx->pc != 0x117D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetIptr_0x1178b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D60u; }
        if (ctx->pc != 0x117D60u) { return; }
    }
    ctx->pc = 0x117D60u;
    // 0x117d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117d68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x117d6c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D6Cu;
    {
        const bool branch_taken_0x117d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x117D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D6Cu;
            // 0x117d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d6c) {
            ctx->pc = 0x117D84u;
            goto label_117d84;
        }
    }
    ctx->pc = 0x117D74u;
    // 0x117d74: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117D74u;
    SET_GPR_U32(ctx, 31, 0x117D7Cu);
    ctx->pc = 0x117D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D74u;
            // 0x117d78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D7Cu; }
        if (ctx->pc != 0x117D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D7Cu; }
        if (ctx->pc != 0x117D7Cu) { return; }
    }
    ctx->pc = 0x117D7Cu;
    // 0x117d7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x117D7Cu;
    {
        const bool branch_taken_0x117d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D7Cu;
            // 0x117d80: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d7c) {
            ctx->pc = 0x117DDCu;
            goto label_117ddc;
        }
    }
    ctx->pc = 0x117D84u;
label_117d84:
    // 0x117d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d88: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x117D88u;
    SET_GPR_U32(ctx, 31, 0x117D90u);
    ctx->pc = 0x117D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D88u;
            // 0x117d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D90u; }
        if (ctx->pc != 0x117D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D90u; }
        if (ctx->pc != 0x117D90u) { return; }
    }
    ctx->pc = 0x117D90u;
    // 0x117d90: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117D90u;
    {
        const bool branch_taken_0x117d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D90u;
            // 0x117d94: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d90) {
            ctx->pc = 0x117DDCu;
            goto label_117ddc;
        }
    }
    ctx->pc = 0x117D98u;
    // 0x117d98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d9c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x117d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117da0: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x117DA0u;
    SET_GPR_U32(ctx, 31, 0x117DA8u);
    ctx->pc = 0x117DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117DA0u;
            // 0x117da4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DA8u; }
        if (ctx->pc != 0x117DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DA8u; }
        if (ctx->pc != 0x117DA8u) { return; }
    }
    ctx->pc = 0x117DA8u;
    // 0x117da8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117DA8u;
    {
        const bool branch_taken_0x117da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DA8u;
            // 0x117dac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117da8) {
            ctx->pc = 0x117DDCu;
            goto label_117ddc;
        }
    }
    ctx->pc = 0x117DB0u;
    // 0x117db0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117db4: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x117db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x117db8: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x117DB8u;
    SET_GPR_U32(ctx, 31, 0x117DC0u);
    ctx->pc = 0x117DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117DB8u;
            // 0x117dbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DC0u; }
        if (ctx->pc != 0x117DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DC0u; }
        if (ctx->pc != 0x117DC0u) { return; }
    }
    ctx->pc = 0x117DC0u;
    // 0x117dc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117DC0u;
    {
        const bool branch_taken_0x117dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DC0u;
            // 0x117dc4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dc0) {
            ctx->pc = 0x117DDCu;
            goto label_117ddc;
        }
    }
    ctx->pc = 0x117DC8u;
    // 0x117dc8: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x117dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x117dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd0: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x117DD0u;
    SET_GPR_U32(ctx, 31, 0x117DD8u);
    ctx->pc = 0x117DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117DD0u;
            // 0x117dd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DD8u; }
        if (ctx->pc != 0x117DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DD8u; }
        if (ctx->pc != 0x117DD8u) { return; }
    }
    ctx->pc = 0x117DD8u;
    // 0x117dd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x117dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_117ddc:
    // 0x117ddc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117de0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117de4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117de8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117df0: 0x3e00008  jr          $ra
    ctx->pc = 0x117DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DF0u;
            // 0x117df4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D48u: goto label_117d48;
            case 0x117D58u: goto label_117d58;
            case 0x117D84u: goto label_117d84;
            case 0x117DDCu: goto label_117ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117DF8u;
}
