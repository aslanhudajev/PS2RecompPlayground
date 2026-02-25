#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _make_path
// Address: 0x11ec70 - 0x11ee04
void _make_path_0x11ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_make_path_0x11ec70");
#endif

    ctx->pc = 0x11ec70u;

    // 0x11ec70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ec74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ec78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ec78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ec80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ec80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ec8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11ec90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11ec94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11ec98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ec9c: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11EC9Cu;
    SET_GPR_U32(ctx, 31, 0x11ECA4u);
    ctx->pc = 0x11ECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC9Cu;
            // 0x11eca0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECA4u; }
        if (ctx->pc != 0x11ECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECA4u; }
        if (ctx->pc != 0x11ECA4u) { return; }
    }
    ctx->pc = 0x11ECA4u;
    // 0x11eca4: 0x2c430080  sltiu       $v1, $v0, 0x80
    ctx->pc = 0x11eca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x11eca8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x11ECA8u;
    {
        const bool branch_taken_0x11eca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECA8u;
            // 0x11ecac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eca8) {
            ctx->pc = 0x11EDE0u;
            goto label_11ede0;
        }
    }
    ctx->pc = 0x11ECB0u;
    // 0x11ecb0: 0x24050898  addiu       $a1, $zero, 0x898
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x11ecb4: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x11ecb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11ecb8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x11ecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x11ecbc: 0x24214150  addiu       $at, $at, 0x4150
    ctx->pc = 0x11ecbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 16720));
    // 0x11ecc0: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x11ecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x11ecc4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x11ECC4u;
    SET_GPR_U32(ctx, 31, 0x11ECCCu);
    ctx->pc = 0x11ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECC4u;
            // 0x11ecc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECCCu; }
        if (ctx->pc != 0x11ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECCCu; }
        if (ctx->pc != 0x11ECCCu) { return; }
    }
    ctx->pc = 0x11ECCCu;
    // 0x11eccc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x11ecccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ecd0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x11ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x11ecd4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11ECD4u;
    {
        const bool branch_taken_0x11ecd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECD4u;
            // 0x11ecd8: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecd4) {
            ctx->pc = 0x11ED00u;
            goto label_11ed00;
        }
    }
    ctx->pc = 0x11ECDCu;
    // 0x11ecdc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x11ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ece0: 0x2665f058  addiu       $a1, $s3, -0xFA8
    ctx->pc = 0x11ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963288));
    // 0x11ece4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11ece4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ece8: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x11ece8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x11ecec: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x11ececu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11ecf0: 0xc047ac2  jal         func_11EB08
    ctx->pc = 0x11ECF0u;
    SET_GPR_U32(ctx, 31, 0x11ECF8u);
    ctx->pc = 0x11ECF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECF0u;
            // 0x11ecf4: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB08u;
    if (runtime->hasFunction(0x11EB08u)) {
        auto targetFn = runtime->lookupFunction(0x11EB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECF8u; }
        if (ctx->pc != 0x11ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _strtok_0x11eb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECF8u; }
        if (ctx->pc != 0x11ECF8u) { return; }
    }
    ctx->pc = 0x11ECF8u;
    // 0x11ecf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11ECF8u;
    {
        const bool branch_taken_0x11ecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECF8u;
            // 0x11ecfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecf8) {
            ctx->pc = 0x11ED10u;
            goto label_11ed10;
        }
    }
    ctx->pc = 0x11ED00u;
label_11ed00:
    // 0x11ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed04: 0xc047ac2  jal         func_11EB08
    ctx->pc = 0x11ED04u;
    SET_GPR_U32(ctx, 31, 0x11ED0Cu);
    ctx->pc = 0x11ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED04u;
            // 0x11ed08: 0x2665f058  addiu       $a1, $s3, -0xFA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EB08u;
    if (runtime->hasFunction(0x11EB08u)) {
        auto targetFn = runtime->lookupFunction(0x11EB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED0Cu; }
        if (ctx->pc != 0x11ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _strtok_0x11eb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED0Cu; }
        if (ctx->pc != 0x11ED0Cu) { return; }
    }
    ctx->pc = 0x11ED0Cu;
    // 0x11ed0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ed0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ed10:
    // 0x11ed10: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11ED10u;
    {
        const bool branch_taken_0x11ed10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED10u;
            // 0x11ed14: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed10) {
            ctx->pc = 0x11EDBCu;
            goto label_11edbc;
        }
    }
    ctx->pc = 0x11ED18u;
    // 0x11ed18: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x11ed1c: 0x2452f058  addiu       $s2, $v0, -0xFA8
    ctx->pc = 0x11ed1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963288));
    // 0x11ed20: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x11ed24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ed28:
    // 0x11ed28: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11ED28u;
    SET_GPR_U32(ctx, 31, 0x11ED30u);
    ctx->pc = 0x11ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED28u;
            // 0x11ed2c: 0x26a5f040  addiu       $a1, $s5, -0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED30u; }
        if (ctx->pc != 0x11ED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED30u; }
        if (ctx->pc != 0x11ED30u) { return; }
    }
    ctx->pc = 0x11ED30u;
    // 0x11ed30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ed30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed34: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11ED34u;
    {
        const bool branch_taken_0x11ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED34u;
            // 0x11ed38: 0x2685f048  addiu       $a1, $s4, -0xFB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed34) {
            ctx->pc = 0x11EDA0u;
            goto label_11eda0;
        }
    }
    ctx->pc = 0x11ED3Cu;
    // 0x11ed3c: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11ED3Cu;
    SET_GPR_U32(ctx, 31, 0x11ED44u);
    ctx->pc = 0x11ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED3Cu;
            // 0x11ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED44u; }
        if (ctx->pc != 0x11ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED44u; }
        if (ctx->pc != 0x11ED44u) { return; }
    }
    ctx->pc = 0x11ED44u;
    // 0x11ed44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11ED48u;
    {
        const bool branch_taken_0x11ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED48u;
            // 0x11ed4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed48) {
            ctx->pc = 0x11ED88u;
            goto label_11ed88;
        }
    }
    ctx->pc = 0x11ED50u;
    // 0x11ed50: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11ED50u;
    SET_GPR_U32(ctx, 31, 0x11ED58u);
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED58u; }
        if (ctx->pc != 0x11ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED58u; }
        if (ctx->pc != 0x11ED58u) { return; }
    }
    ctx->pc = 0x11ED58u;
    // 0x11ed58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11ed60: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x11ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x11ed64: 0xc04f5aa  jal         func_13D6A8
    ctx->pc = 0x11ED64u;
    SET_GPR_U32(ctx, 31, 0x11ED6Cu);
    ctx->pc = 0x11ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED64u;
            // 0x11ed68: 0xa040ffff  sb          $zero, -0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D6A8u;
    if (runtime->hasFunction(0x13D6A8u)) {
        auto targetFn = runtime->lookupFunction(0x13D6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED6Cu; }
        if (ctx->pc != 0x11ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x13d6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED6Cu; }
        if (ctx->pc != 0x11ED6Cu) { return; }
    }
    ctx->pc = 0x11ED6Cu;
    // 0x11ed6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ed70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed74: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11ED74u;
    {
        const bool branch_taken_0x11ed74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED74u;
            // 0x11ed78: 0x2665f058  addiu       $a1, $s3, -0xFA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed74) {
            ctx->pc = 0x11EDE0u;
            goto label_11ede0;
        }
    }
    ctx->pc = 0x11ED7Cu;
    // 0x11ed7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11ED7Cu;
    {
        const bool branch_taken_0x11ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED7Cu;
            // 0x11ed80: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed7c) {
            ctx->pc = 0x11EDA8u;
            goto label_11eda8;
        }
    }
    ctx->pc = 0x11ED84u;
    // 0x11ed84: 0x0  nop
    ctx->pc = 0x11ed84u;
    // NOP
label_11ed88:
    // 0x11ed88: 0xc04f336  jal         func_13CCD8
    ctx->pc = 0x11ED88u;
    SET_GPR_U32(ctx, 31, 0x11ED90u);
    ctx->pc = 0x13CCD8u;
    if (runtime->hasFunction(0x13CCD8u)) {
        auto targetFn = runtime->lookupFunction(0x13CCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED90u; }
        if (ctx->pc != 0x11ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x13ccd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED90u; }
        if (ctx->pc != 0x11ED90u) { return; }
    }
    ctx->pc = 0x11ED90u;
    // 0x11ed90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed94: 0xc04f336  jal         func_13CCD8
    ctx->pc = 0x11ED94u;
    SET_GPR_U32(ctx, 31, 0x11ED9Cu);
    ctx->pc = 0x11ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED94u;
            // 0x11ed98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CCD8u;
    if (runtime->hasFunction(0x13CCD8u)) {
        auto targetFn = runtime->lookupFunction(0x13CCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED9Cu; }
        if (ctx->pc != 0x11ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x13ccd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED9Cu; }
        if (ctx->pc != 0x11ED9Cu) { return; }
    }
    ctx->pc = 0x11ED9Cu;
    // 0x11ed9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eda0:
    // 0x11eda0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11eda4: 0x24a5f058  addiu       $a1, $a1, -0xFA8
    ctx->pc = 0x11eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963288));
label_11eda8:
    // 0x11eda8: 0xc047ac2  jal         func_11EB08
    ctx->pc = 0x11EDA8u;
    SET_GPR_U32(ctx, 31, 0x11EDB0u);
    ctx->pc = 0x11EB08u;
    if (runtime->hasFunction(0x11EB08u)) {
        auto targetFn = runtime->lookupFunction(0x11EB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDB0u; }
        if (ctx->pc != 0x11EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _strtok_0x11eb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDB0u; }
        if (ctx->pc != 0x11EDB0u) { return; }
    }
    ctx->pc = 0x11EDB0u;
    // 0x11edb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11edb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edb4: 0x5600ffdc  bnel        $s0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11EDB4u;
    {
        const bool branch_taken_0x11edb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11edb4) {
            ctx->pc = 0x11EDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDB4u;
            // 0x11edb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11ED28u;
            goto label_11ed28;
        }
    }
    ctx->pc = 0x11EDBCu;
label_11edbc:
    // 0x11edbc: 0x2665f058  addiu       $a1, $s3, -0xFA8
    ctx->pc = 0x11edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963288));
    // 0x11edc0: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11EDC0u;
    SET_GPR_U32(ctx, 31, 0x11EDC8u);
    ctx->pc = 0x11EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDC0u;
            // 0x11edc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDC8u; }
        if (ctx->pc != 0x11EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDC8u; }
        if (ctx->pc != 0x11EDC8u) { return; }
    }
    ctx->pc = 0x11EDC8u;
    // 0x11edc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EDC8u;
    {
        const bool branch_taken_0x11edc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDC8u;
            // 0x11edcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edc8) {
            ctx->pc = 0x11EDDCu;
            goto label_11eddc;
        }
    }
    ctx->pc = 0x11EDD0u;
    // 0x11edd0: 0xc04f5aa  jal         func_13D6A8
    ctx->pc = 0x11EDD0u;
    SET_GPR_U32(ctx, 31, 0x11EDD8u);
    ctx->pc = 0x11EDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDD0u;
            // 0x11edd4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D6A8u;
    if (runtime->hasFunction(0x13D6A8u)) {
        auto targetFn = runtime->lookupFunction(0x13D6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD8u; }
        if (ctx->pc != 0x11EDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x13d6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD8u; }
        if (ctx->pc != 0x11EDD8u) { return; }
    }
    ctx->pc = 0x11EDD8u;
    // 0x11edd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x11edd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_11eddc:
    // 0x11eddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ede0:
    // 0x11ede0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ede0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ede4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11ede4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ede8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11ede8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11edec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11edecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11edf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11edf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11edf4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11edf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11edf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDFCu;
            // 0x11ee00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ED00u: goto label_11ed00;
            case 0x11ED10u: goto label_11ed10;
            case 0x11ED28u: goto label_11ed28;
            case 0x11ED88u: goto label_11ed88;
            case 0x11EDA0u: goto label_11eda0;
            case 0x11EDA8u: goto label_11eda8;
            case 0x11EDBCu: goto label_11edbc;
            case 0x11EDDCu: goto label_11eddc;
            case 0x11EDE0u: goto label_11ede0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EE04u;
}
