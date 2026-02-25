#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateShot
// Address: 0x153d40 - 0x153f94
void CreateShot_0x153d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateShot_0x153d40");
#endif

    ctx->pc = 0x153d40u;

    // 0x153d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x153d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d58: 0xc055048  jal         func_154120
    ctx->pc = 0x153D58u;
    SET_GPR_U32(ctx, 31, 0x153D60u);
    ctx->pc = 0x153D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153D58u;
            // 0x153d5c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154120u;
    if (runtime->hasFunction(0x154120u)) {
        auto targetFn = runtime->lookupFunction(0x154120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D60u; }
        if (ctx->pc != 0x153D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlFlash_0x154120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D60u; }
        if (ctx->pc != 0x153D60u) { return; }
    }
    ctx->pc = 0x153D60u;
    // 0x153d60: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153D60u;
    SET_GPR_U32(ctx, 31, 0x153D68u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D68u; }
        if (ctx->pc != 0x153D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153D68u; }
        if (ctx->pc != 0x153D68u) { return; }
    }
    ctx->pc = 0x153D68u;
    // 0x153d68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153d6c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153d70: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153d74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x153d78: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x153d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x153d7c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x153d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153d80: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x153d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x153d84: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x153d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x153d88: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153d8c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153D8Cu;
    {
        const bool branch_taken_0x153d8c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D8Cu;
            // 0x153d90: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d8c) {
            ctx->pc = 0x153D9Cu;
            goto label_153d9c;
        }
    }
    ctx->pc = 0x153D94u;
    // 0x153d94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153d98: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153d9c:
    // 0x153d9c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x153d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x153da0: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x153da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153da4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DA4u;
    {
        const bool branch_taken_0x153da4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DA4u;
            // 0x153da8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153da4) {
            ctx->pc = 0x153DB4u;
            goto label_153db4;
        }
    }
    ctx->pc = 0x153DACu;
    // 0x153dac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153db0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153db4:
    // 0x153db4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x153db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153dbc: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x153dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x153dc0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x153dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x153dc4: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x153dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153dc8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DC8u;
    {
        const bool branch_taken_0x153dc8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DC8u;
            // 0x153dcc: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dc8) {
            ctx->pc = 0x153DD8u;
            goto label_153dd8;
        }
    }
    ctx->pc = 0x153DD0u;
    // 0x153dd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153dd4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153dd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153dd8:
    // 0x153dd8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x153dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x153ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153de0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x153de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x153de4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153de8: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153DE8u;
    SET_GPR_U32(ctx, 31, 0x153DF0u);
    ctx->pc = 0x153DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153DE8u;
            // 0x153dec: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153DF0u; }
        if (ctx->pc != 0x153DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153DF0u; }
        if (ctx->pc != 0x153DF0u) { return; }
    }
    ctx->pc = 0x153DF0u;
    // 0x153df0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153df4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153df8: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x153df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153dfc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x153dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x153e00: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x153e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x153e04: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153e08: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x153e0c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x153e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x153e10: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153e14: 0x32023  negu        $a0, $v1
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x153e18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153E18u;
    {
        const bool branch_taken_0x153e18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E18u;
            // 0x153e1c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e18) {
            ctx->pc = 0x153E28u;
            goto label_153e28;
        }
    }
    ctx->pc = 0x153E20u;
    // 0x153e20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153e24: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153e24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153e28:
    // 0x153e28: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x153e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x153e2c: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153e30: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153E30u;
    {
        const bool branch_taken_0x153e30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E30u;
            // 0x153e34: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e30) {
            ctx->pc = 0x153E40u;
            goto label_153e40;
        }
    }
    ctx->pc = 0x153E38u;
    // 0x153e38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153e3c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153e40:
    // 0x153e40: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x153e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153e48: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x153e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x153e4c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x153e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x153e50: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153e54: 0x32023  negu        $a0, $v1
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x153e58: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153E58u;
    {
        const bool branch_taken_0x153e58 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E58u;
            // 0x153e5c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e58) {
            ctx->pc = 0x153E68u;
            goto label_153e68;
        }
    }
    ctx->pc = 0x153E60u;
    // 0x153e60: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153e64: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153e68:
    // 0x153e68: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x153e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x153e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153e70: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x153e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x153e74: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153e78: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153E78u;
    SET_GPR_U32(ctx, 31, 0x153E80u);
    ctx->pc = 0x153E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153E78u;
            // 0x153e7c: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153E80u; }
        if (ctx->pc != 0x153E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153E80u; }
        if (ctx->pc != 0x153E80u) { return; }
    }
    ctx->pc = 0x153E80u;
    // 0x153e80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153e84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153e88: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153e8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x153e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153e90: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x153e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153e94: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x153e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153e98: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x153e9c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x153e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x153ea0: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153ea4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x153ea8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x153ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x153eac: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153eb0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x153eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x153eb4: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153eb8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x153ebc: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x153ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x153ec0: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x153ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x153ec4: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x153ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153ec8: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x153ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x153ecc: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x153eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x153ed0: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153ED0u;
    SET_GPR_U32(ctx, 31, 0x153ED8u);
    ctx->pc = 0x153ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153ED0u;
            // 0x153ed4: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ED8u; }
        if (ctx->pc != 0x153ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ED8u; }
        if (ctx->pc != 0x153ED8u) { return; }
    }
    ctx->pc = 0x153ED8u;
    // 0x153ed8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153edc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x153edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153ee0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153ee4: 0x3c034ec4  lui         $v1, 0x4EC4
    ctx->pc = 0x153ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20164 << 16));
    // 0x153ee8: 0x8e280098  lw          $t0, 0x98($s1)
    ctx->pc = 0x153ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153eec: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x153eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x153ef0: 0x3463ec4f  ori         $v1, $v1, 0xEC4F
    ctx->pc = 0x153ef0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)60495u)));
    // 0x153ef4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153ef8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x153ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153efc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x153efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153f00: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153f04: 0x2503fff8  addiu       $v1, $t0, -0x8
    ctx->pc = 0x153f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x153f08: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x153f0c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x153f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x153f10: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x153f10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153f14: 0x1810  mfhi        $v1
    ctx->pc = 0x153f14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x153f18: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x153f18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x153f1c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153f20: 0x2503fff0  addiu       $v1, $t0, -0x10
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x153f24: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x153f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x153f28: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153f2c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x153f30: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x153f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x153f34: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153f38: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x153f3c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x153f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x153f40: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x153f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x153f44: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153f48: 0x31823  negu        $v1, $v1
    ctx->pc = 0x153f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x153f4c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x153f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x153f50: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x153f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
    // 0x153f54: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x153f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    // 0x153f58: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x153f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153f5c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x153f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x153f60: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x153F60u;
    {
        const bool branch_taken_0x153f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f60) {
            ctx->pc = 0x153F78u;
            goto label_153f78;
        }
    }
    ctx->pc = 0x153F68u;
    // 0x153f68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x153f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153f6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x153F6Cu;
    {
        const bool branch_taken_0x153f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F6Cu;
            // 0x153f70: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f6c) {
            ctx->pc = 0x153F80u;
            goto label_153f80;
        }
    }
    ctx->pc = 0x153F74u;
    // 0x153f74: 0x0  nop
    ctx->pc = 0x153f74u;
    // NOP
label_153f78:
    // 0x153f78: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x153f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x153f7c: 0x0  nop
    ctx->pc = 0x153f7cu;
    // NOP
label_153f80:
    // 0x153f80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x153F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153F8Cu;
            // 0x153f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153D9Cu: goto label_153d9c;
            case 0x153DB4u: goto label_153db4;
            case 0x153DD8u: goto label_153dd8;
            case 0x153E28u: goto label_153e28;
            case 0x153E40u: goto label_153e40;
            case 0x153E68u: goto label_153e68;
            case 0x153F78u: goto label_153f78;
            case 0x153F80u: goto label_153f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153F94u;
}
