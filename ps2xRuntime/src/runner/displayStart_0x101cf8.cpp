#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: displayStart
// Address: 0x101cf8 - 0x101f80
void displayStart_0x101cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("displayStart_0x101cf8");
#endif

    ctx->pc = 0x101cf8u;

    // 0x101cf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x101cfc: 0xaf8080a0  sw          $zero, -0x7F60($gp)
    ctx->pc = 0x101cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 0));
    // 0x101d00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x101d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x101d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101d08: 0x3c130014  lui         $s3, 0x14
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20 << 16));
    // 0x101d0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x101d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x101d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x101d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x101d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x101d18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x101d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x101d1c: 0xc04292e  jal         func_10A4B8
    ctx->pc = 0x101D1Cu;
    SET_GPR_U32(ctx, 31, 0x101D24u);
    ctx->pc = 0x101D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D1Cu;
            // 0x101d20: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B8u;
    if (runtime->hasFunction(0x10A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D24u; }
        if (ctx->pc != 0x101D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D24u; }
        if (ctx->pc != 0x101D24u) { return; }
    }
    ctx->pc = 0x101D24u;
    // 0x101d24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101d28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x101d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x101d2c: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x101d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x101d30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d34: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x101d34u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32639u)));
    // 0x101d38: 0xc04003a  jal         func_1000E8
    ctx->pc = 0x101D38u;
    SET_GPR_U32(ctx, 31, 0x101D40u);
    ctx->pc = 0x101D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D38u;
            // 0x101d3c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000E8u;
    if (runtime->hasFunction(0x1000E8u)) {
        auto targetFn = runtime->lookupFunction(0x1000E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D40u; }
        if (ctx->pc != 0x101D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D40u; }
        if (ctx->pc != 0x101D40u) { return; }
    }
    ctx->pc = 0x101D40u;
    // 0x101d40: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x101d44: 0x8663dfc0  lh          $v1, -0x2040($s3)
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
    // 0x101d48: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x101D48u;
    {
        const bool branch_taken_0x101d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D48u;
            // 0x101d4c: 0xaf82814c  sw          $v0, -0x7EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d48) {
            ctx->pc = 0x101F60u;
            goto label_101f60;
        }
    }
    ctx->pc = 0x101D50u;
    // 0x101d50: 0x3c140014  lui         $s4, 0x14
    ctx->pc = 0x101d50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)20 << 16));
    // 0x101d54: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x101d54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x101d58: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x101d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101d60:
    // 0x101d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d64: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x101D64u;
    SET_GPR_U32(ctx, 31, 0x101D6Cu);
    ctx->pc = 0x101D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D64u;
            // 0x101d68: 0x2686e100  addiu       $a2, $s4, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D6Cu; }
        if (ctx->pc != 0x101D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D6Cu; }
        if (ctx->pc != 0x101D6Cu) { return; }
    }
    ctx->pc = 0x101D6Cu;
    // 0x101d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0xc04591e  jal         func_116478
    ctx->pc = 0x101D70u;
    SET_GPR_U32(ctx, 31, 0x101D78u);
    ctx->pc = 0x101D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D70u;
            // 0x101d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D78u; }
        if (ctx->pc != 0x101D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D78u; }
        if (ctx->pc != 0x101D78u) { return; }
    }
    ctx->pc = 0x101D78u;
    // 0x101d78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x101d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101d80: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101D80u;
    {
        const bool branch_taken_0x101d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D80u;
            // 0x101d84: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d80) {
            ctx->pc = 0x101D9Cu;
            goto label_101d9c;
        }
    }
    ctx->pc = 0x101D88u;
    // 0x101d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x101d8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101D8Cu;
    {
        const bool branch_taken_0x101d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D8Cu;
            // 0x101d90: 0x2682e100  addiu       $v0, $s4, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d8c) {
            ctx->pc = 0x101DA0u;
            goto label_101da0;
        }
    }
    ctx->pc = 0x101D94u;
    // 0x101d94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101D94u;
    {
        const bool branch_taken_0x101d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D94u;
            // 0x101d98: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d94) {
            ctx->pc = 0x101DB4u;
            goto label_101db4;
        }
    }
    ctx->pc = 0x101D9Cu;
label_101d9c:
    // 0x101d9c: 0x2682e100  addiu       $v0, $s4, -0x1F00
    ctx->pc = 0x101d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959360));
label_101da0:
    // 0x101da0: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x101da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x101da4: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x101da4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x101da8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x101dac: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x101dacu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x101db0: 0xa7838112  sh          $v1, -0x7EEE($gp)
    ctx->pc = 0x101db0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_101db4:
    // 0x101db4: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101DB4u;
    SET_GPR_U32(ctx, 31, 0x101DBCu);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DBCu; }
        if (ctx->pc != 0x101DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DBCu; }
        if (ctx->pc != 0x101DBCu) { return; }
    }
    ctx->pc = 0x101DBCu;
    // 0x101dbc: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101DBCu;
    SET_GPR_U32(ctx, 31, 0x101DC4u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DC4u; }
        if (ctx->pc != 0x101DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DC4u; }
        if (ctx->pc != 0x101DC4u) { return; }
    }
    ctx->pc = 0x101DC4u;
    // 0x101dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dcc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101dd0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x101dd4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x101dd8: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x101ddc: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x101DDCu;
    SET_GPR_U32(ctx, 31, 0x101DE4u);
    ctx->pc = 0x101DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DDCu;
            // 0x101de0: 0x262a2b70  addiu       $t2, $s1, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE4u; }
        if (ctx->pc != 0x101DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE4u; }
        if (ctx->pc != 0x101DE4u) { return; }
    }
    ctx->pc = 0x101DE4u;
    // 0x101de4: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101DE4u;
    SET_GPR_U32(ctx, 31, 0x101DECu);
    ctx->pc = 0x101DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DE4u;
            // 0x101de8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DECu; }
        if (ctx->pc != 0x101DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DECu; }
        if (ctx->pc != 0x101DECu) { return; }
    }
    ctx->pc = 0x101DECu;
    // 0x101dec: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x101DECu;
    SET_GPR_U32(ctx, 31, 0x101DF4u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DF4u; }
        if (ctx->pc != 0x101DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DF4u; }
        if (ctx->pc != 0x101DF4u) { return; }
    }
    ctx->pc = 0x101DF4u;
    // 0x101df4: 0x8f8480a0  lw          $a0, -0x7F60($gp)
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x101df8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x101df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x101dfc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101DFCu;
    {
        const bool branch_taken_0x101dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x101dfc) {
            ctx->pc = 0x101E18u;
            goto label_101e18;
        }
    }
    ctx->pc = 0x101E04u;
    // 0x101e04: 0xc041fd8  jal         func_107F60
    ctx->pc = 0x101E04u;
    SET_GPR_U32(ctx, 31, 0x101E0Cu);
    ctx->pc = 0x107F60u;
    if (runtime->hasFunction(0x107F60u)) {
        auto targetFn = runtime->lookupFunction(0x107F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E0Cu; }
        if (ctx->pc != 0x101E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        screenFade_0x107f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E0Cu; }
        if (ctx->pc != 0x101E0Cu) { return; }
    }
    ctx->pc = 0x101E0Cu;
    // 0x101e0c: 0x8f8280a0  lw          $v0, -0x7F60($gp)
    ctx->pc = 0x101e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x101e10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101e14: 0xaf8280a0  sw          $v0, -0x7F60($gp)
    ctx->pc = 0x101e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 2));
label_101e18:
    // 0x101e18: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101E18u;
    SET_GPR_U32(ctx, 31, 0x101E20u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E20u; }
        if (ctx->pc != 0x101E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E20u; }
        if (ctx->pc != 0x101E20u) { return; }
    }
    ctx->pc = 0x101E20u;
    // 0x101e20: 0x97848112  lhu         $a0, -0x7EEE($gp)
    ctx->pc = 0x101e20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x101e24: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x101e24u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2048u)));
    // 0x101e28: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x101E28u;
    {
        const bool branch_taken_0x101e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E28u;
            // 0x101e2c: 0x26421300  addiu       $v0, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e28) {
            ctx->pc = 0x101EC4u;
            goto label_101ec4;
        }
    }
    ctx->pc = 0x101E30u;
    // 0x101e30: 0x8443001a  lh          $v1, 0x1A($v0)
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x101e34: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x101E34u;
    {
        const bool branch_taken_0x101e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E34u;
            // 0x101e38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e34) {
            ctx->pc = 0x101EB0u;
            goto label_101eb0;
        }
    }
    ctx->pc = 0x101E3Cu;
    // 0x101e3c: 0x0  nop
    ctx->pc = 0x101e3cu;
    // NOP
label_101e40:
    // 0x101e40: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101E40u;
    SET_GPR_U32(ctx, 31, 0x101E48u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E48u; }
        if (ctx->pc != 0x101E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E48u; }
        if (ctx->pc != 0x101E48u) { return; }
    }
    ctx->pc = 0x101E48u;
    // 0x101e48: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101E48u;
    SET_GPR_U32(ctx, 31, 0x101E50u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E50u; }
        if (ctx->pc != 0x101E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E50u; }
        if (ctx->pc != 0x101E50u) { return; }
    }
    ctx->pc = 0x101E50u;
    // 0x101e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e58: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101e5c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x101e60: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x101e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x101e64: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x101e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x101e68: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x101E68u;
    SET_GPR_U32(ctx, 31, 0x101E70u);
    ctx->pc = 0x101E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E68u;
            // 0x101e6c: 0x262a2b70  addiu       $t2, $s1, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E70u; }
        if (ctx->pc != 0x101E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E70u; }
        if (ctx->pc != 0x101E70u) { return; }
    }
    ctx->pc = 0x101E70u;
    // 0x101e70: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101E70u;
    SET_GPR_U32(ctx, 31, 0x101E78u);
    ctx->pc = 0x101E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E70u;
            // 0x101e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E78u; }
        if (ctx->pc != 0x101E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E78u; }
        if (ctx->pc != 0x101E78u) { return; }
    }
    ctx->pc = 0x101E78u;
    // 0x101e78: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x101E78u;
    SET_GPR_U32(ctx, 31, 0x101E80u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E80u; }
        if (ctx->pc != 0x101E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E80u; }
        if (ctx->pc != 0x101E80u) { return; }
    }
    ctx->pc = 0x101E80u;
    // 0x101e80: 0xc04238e  jal         func_108E38
    ctx->pc = 0x101E80u;
    SET_GPR_U32(ctx, 31, 0x101E88u);
    ctx->pc = 0x101E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E80u;
            // 0x101e84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E88u; }
        if (ctx->pc != 0x101E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E88u; }
        if (ctx->pc != 0x101E88u) { return; }
    }
    ctx->pc = 0x101E88u;
    // 0x101e88: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101E88u;
    SET_GPR_U32(ctx, 31, 0x101E90u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E90u; }
        if (ctx->pc != 0x101E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E90u; }
        if (ctx->pc != 0x101E90u) { return; }
    }
    ctx->pc = 0x101E90u;
    // 0x101e90: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x101e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101e94: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x101e98: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x101E98u;
    {
        const bool branch_taken_0x101e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E98u;
            // 0x101e9c: 0x26431300  addiu       $v1, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e98) {
            ctx->pc = 0x101E40u;
            goto label_101e40;
        }
    }
    ctx->pc = 0x101EA0u;
    // 0x101ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ea4: 0xa462001a  sh          $v0, 0x1A($v1)
    ctx->pc = 0x101ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x101ea8: 0xa660dfc0  sh          $zero, -0x2040($s3)
    ctx->pc = 0x101ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294959040), (uint16_t)GPR_U32(ctx, 0));
    // 0x101eac: 0x97848112  lhu         $a0, -0x7EEE($gp)
    ctx->pc = 0x101eacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_101eb0:
    // 0x101eb0: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x101eb0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2048u)));
    // 0x101eb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x101EB4u;
    {
        const bool branch_taken_0x101eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EB4u;
            // 0x101eb8: 0x2a020100  slti        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eb4) {
            ctx->pc = 0x101EE0u;
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EBCu;
    // 0x101ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101EBCu;
    {
        const bool branch_taken_0x101ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EBCu;
            // 0x101ec0: 0x26441300  addiu       $a0, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ebc) {
            ctx->pc = 0x101ECCu;
            goto label_101ecc;
        }
    }
    ctx->pc = 0x101EC4u;
label_101ec4:
    // 0x101ec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101ec8: 0x26441300  addiu       $a0, $s2, 0x1300
    ctx->pc = 0x101ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
label_101ecc:
    // 0x101ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ed0: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x101ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x101ed4: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x101ED4u;
    {
        const bool branch_taken_0x101ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101ed4) {
            ctx->pc = 0x101ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101ED4u;
            // 0x101ed8: 0xa480001a  sh          $zero, 0x1A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101EDCu;
            goto label_101edc;
        }
    }
    ctx->pc = 0x101EDCu;
label_101edc:
    // 0x101edc: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x101edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_101ee0:
    // 0x101ee0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x101EE0u;
    {
        const bool branch_taken_0x101ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EE0u;
            // 0x101ee4: 0x8662dfc0  lh          $v0, -0x2040($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ee0) {
            ctx->pc = 0x101F58u;
            goto label_101f58;
        }
    }
    ctx->pc = 0x101EE8u;
    // 0x101ee8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x101EE8u;
    {
        const bool branch_taken_0x101ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EE8u;
            // 0x101eec: 0x8f82814c  lw          $v0, -0x7EB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ee8) {
            ctx->pc = 0x101F44u;
            goto label_101f44;
        }
    }
    ctx->pc = 0x101EF0u;
label_101ef0:
    // 0x101ef0: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101EF0u;
    SET_GPR_U32(ctx, 31, 0x101EF8u);
    ctx->pc = 0x101EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EF0u;
            // 0x101ef4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EF8u; }
        if (ctx->pc != 0x101EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EF8u; }
        if (ctx->pc != 0x101EF8u) { return; }
    }
    ctx->pc = 0x101EF8u;
    // 0x101ef8: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101EF8u;
    SET_GPR_U32(ctx, 31, 0x101F00u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F00u; }
        if (ctx->pc != 0x101F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F00u; }
        if (ctx->pc != 0x101F00u) { return; }
    }
    ctx->pc = 0x101F00u;
    // 0x101f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f08: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101f0c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x101f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x101f10: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x101f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x101f14: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x101f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x101f18: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x101F18u;
    SET_GPR_U32(ctx, 31, 0x101F20u);
    ctx->pc = 0x101F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F18u;
            // 0x101f1c: 0x262a2b70  addiu       $t2, $s1, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F20u; }
        if (ctx->pc != 0x101F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F20u; }
        if (ctx->pc != 0x101F20u) { return; }
    }
    ctx->pc = 0x101F20u;
    // 0x101f20: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101F20u;
    SET_GPR_U32(ctx, 31, 0x101F28u);
    ctx->pc = 0x101F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F20u;
            // 0x101f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F28u; }
        if (ctx->pc != 0x101F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F28u; }
        if (ctx->pc != 0x101F28u) { return; }
    }
    ctx->pc = 0x101F28u;
    // 0x101f28: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x101F28u;
    SET_GPR_U32(ctx, 31, 0x101F30u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F30u; }
        if (ctx->pc != 0x101F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F30u; }
        if (ctx->pc != 0x101F30u) { return; }
    }
    ctx->pc = 0x101F30u;
    // 0x101f30: 0xc04238e  jal         func_108E38
    ctx->pc = 0x101F30u;
    SET_GPR_U32(ctx, 31, 0x101F38u);
    ctx->pc = 0x101F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F30u;
            // 0x101f34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F38u; }
        if (ctx->pc != 0x101F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F38u; }
        if (ctx->pc != 0x101F38u) { return; }
    }
    ctx->pc = 0x101F38u;
    // 0x101f38: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101F38u;
    SET_GPR_U32(ctx, 31, 0x101F40u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F40u; }
        if (ctx->pc != 0x101F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F40u; }
        if (ctx->pc != 0x101F40u) { return; }
    }
    ctx->pc = 0x101F40u;
    // 0x101f40: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
label_101f44:
    // 0x101f44: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x101f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x101f48: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x101F48u;
    {
        const bool branch_taken_0x101f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f48) {
            ctx->pc = 0x101EF0u;
            goto label_101ef0;
        }
    }
    ctx->pc = 0x101F50u;
    // 0x101f50: 0xa660dfc0  sh          $zero, -0x2040($s3)
    ctx->pc = 0x101f50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294959040), (uint16_t)GPR_U32(ctx, 0));
    // 0x101f54: 0x8662dfc0  lh          $v0, -0x2040($s3)
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
label_101f58:
    // 0x101f58: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x101F58u;
    {
        const bool branch_taken_0x101f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F58u;
            // 0x101f5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f58) {
            ctx->pc = 0x101D60u;
            goto label_101d60;
        }
    }
    ctx->pc = 0x101F60u;
label_101f60:
    // 0x101f60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x101f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101f64: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x101f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101f68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x101f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101f6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x101f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101f70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x101f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101f78: 0x8042376  j           func_108DD8
    ctx->pc = 0x101F78u;
    ctx->pc = 0x101F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F78u;
            // 0x101f7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DD8u;
    if (runtime->hasFunction(0x108DD8u)) {
        auto targetFn = runtime->lookupFunction(0x108DD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        initFadeIn_0x108dd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x101F80u;
}
