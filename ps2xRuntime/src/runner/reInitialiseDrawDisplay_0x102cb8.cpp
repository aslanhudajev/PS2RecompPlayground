#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: reInitialiseDrawDisplay
// Address: 0x102cb8 - 0x1030dc
void reInitialiseDrawDisplay_0x102cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("reInitialiseDrawDisplay_0x102cb8");
#endif

    ctx->pc = 0x102cb8u;

    // 0x102cb8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x102cbc: 0xaf8082b4  sw          $zero, -0x7D4C($gp)
    ctx->pc = 0x102cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 0));
    // 0x102cc0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x102cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x102cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cc8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x102cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x102ccc: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x102cccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x102cd0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x102cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x102cd4: 0x2415fe00  addiu       $s5, $zero, -0x200
    ctx->pc = 0x102cd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x102cd8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x102cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x102cdc: 0x27948498  addiu       $s4, $gp, -0x7B68
    ctx->pc = 0x102cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935704));
    // 0x102ce0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x102ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x102ce4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ce8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x102ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x102cec: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x102cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x102cf0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x102cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x102cf4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x102cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x102cf8: 0xc043948  jal         func_10E520
    ctx->pc = 0x102CF8u;
    SET_GPR_U32(ctx, 31, 0x102D00u);
    ctx->pc = 0x102CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102CF8u;
            // 0x102cfc: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D00u; }
        if (ctx->pc != 0x102D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D00u; }
        if (ctx->pc != 0x102D00u) { return; }
    }
    ctx->pc = 0x102D00u;
    // 0x102d00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d04: 0xc043322  jal         func_10CC88
    ctx->pc = 0x102D04u;
    SET_GPR_U32(ctx, 31, 0x102D0Cu);
    ctx->pc = 0x102D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102D04u;
            // 0x102d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D0Cu; }
        if (ctx->pc != 0x102D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D0Cu; }
        if (ctx->pc != 0x102D0Cu) { return; }
    }
    ctx->pc = 0x102D0Cu;
    // 0x102d0c: 0xc043192  jal         func_10C648
    ctx->pc = 0x102D0Cu;
    SET_GPR_U32(ctx, 31, 0x102D14u);
    ctx->pc = 0x10C648u;
    if (runtime->hasFunction(0x10C648u)) {
        auto targetFn = runtime->lookupFunction(0x10C648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D14u; }
        if (ctx->pc != 0x102D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D14u; }
        if (ctx->pc != 0x102D14u) { return; }
    }
    ctx->pc = 0x102D14u;
    // 0x102d14: 0xc040ad4  jal         func_102B50
    ctx->pc = 0x102D14u;
    SET_GPR_U32(ctx, 31, 0x102D1Cu);
    ctx->pc = 0x102B50u;
    if (runtime->hasFunction(0x102B50u)) {
        auto targetFn = runtime->lookupFunction(0x102B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D1Cu; }
        if (ctx->pc != 0x102D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        clearVRAM_0x102b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D1Cu; }
        if (ctx->pc != 0x102D1Cu) { return; }
    }
    ctx->pc = 0x102D1Cu;
    // 0x102d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102d24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x102d28: 0xc04314a  jal         func_10C528
    ctx->pc = 0x102D28u;
    SET_GPR_U32(ctx, 31, 0x102D30u);
    ctx->pc = 0x102D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102D28u;
            // 0x102d2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C528u;
    if (runtime->hasFunction(0x10C528u)) {
        auto targetFn = runtime->lookupFunction(0x10C528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D30u; }
        if (ctx->pc != 0x102D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10c528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D30u; }
        if (ctx->pc != 0x102D30u) { return; }
    }
    ctx->pc = 0x102D30u;
    // 0x102d30: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x102d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x102d34: 0x2407ffbf  addiu       $a3, $zero, -0x41
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x102d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d3c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x102d40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102d44: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x102d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x102d48: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x102d48u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x102d4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x102d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x102d50: 0xc04222c  jal         func_1088B0
    ctx->pc = 0x102D50u;
    SET_GPR_U32(ctx, 31, 0x102D58u);
    ctx->pc = 0x102D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102D50u;
            // 0x102d54: 0xa7808498  sh          $zero, -0x7B68($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935704), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1088B0u;
    if (runtime->hasFunction(0x1088B0u)) {
        auto targetFn = runtime->lookupFunction(0x1088B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D58u; }
        if (ctx->pc != 0x102D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceNextFBaddr_0x1088b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D58u; }
        if (ctx->pc != 0x102D58u) { return; }
    }
    ctx->pc = 0x102D58u;
    // 0x102d58: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x102d5c: 0xa782849a  sh          $v0, -0x7B66($gp)
    ctx->pc = 0x102d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935706), (uint16_t)GPR_U32(ctx, 2));
    // 0x102d60: 0x24721600  addiu       $s2, $v1, 0x1600
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x102d64: 0x0  nop
    ctx->pc = 0x102d64u;
    // NOP
label_102d68:
    // 0x102d68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d70: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x102d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x102d74: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x102d78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d7c: 0xc0431ac  jal         func_10C6B0
    ctx->pc = 0x102D7Cu;
    SET_GPR_U32(ctx, 31, 0x102D84u);
    ctx->pc = 0x102D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102D7Cu;
            // 0x102d80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6B0u;
    if (runtime->hasFunction(0x10C6B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D84u; }
        if (ctx->pc != 0x102D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x10c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D84u; }
        if (ctx->pc != 0x102D84u) { return; }
    }
    ctx->pc = 0x102D84u;
    // 0x102d84: 0x24170038  addiu       $s7, $zero, 0x38
    ctx->pc = 0x102d84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x102d88: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x102d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102d8c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x102d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x102d90: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x102d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102d94: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x102d94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x102d98: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x102d9c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x102d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x102da0: 0x2407bfff  addiu       $a3, $zero, -0x4001
    ctx->pc = 0x102da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x102da4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x102da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x102da8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x102da8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x102dac: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x102dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x102db0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x102db0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x102db4: 0x3c0bf3ff  lui         $t3, 0xF3FF
    ctx->pc = 0x102db4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62463 << 16));
    // 0x102db8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x102db8u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65535u)));
    // 0x102dbc: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x102dbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x102dc0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x102dc0u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65535u)));
    // 0x102dc4: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x102dc8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x102dc8u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)65535u)));
    // 0x102dcc: 0x525021  addu        $t2, $v0, $s2
    ctx->pc = 0x102dccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x102dd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x102dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102dd4: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x102dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x102dd8: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x102dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x102ddc: 0xb1460007  sdl         $a2, 0x7($t2)
    ctx->pc = 0x102ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102de0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x102de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102de4: 0xb5460000  sdr         $a2, 0x0($t2)
    ctx->pc = 0x102de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102de8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102dec: 0x6bad000f  ldl         $t5, 0xF($sp)
    ctx->pc = 0x102decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x102df0: 0x6fad0008  ldr         $t5, 0x8($sp)
    ctx->pc = 0x102df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x102df4: 0xb14d000f  sdl         $t5, 0xF($t2)
    ctx->pc = 0x102df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102df8: 0xb54d0008  sdr         $t5, 0x8($t2)
    ctx->pc = 0x102df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102dfc: 0x563021  addu        $a2, $v0, $s6
    ctx->pc = 0x102dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x102e00: 0x6bac0017  ldl         $t4, 0x17($sp)
    ctx->pc = 0x102e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x102e04: 0x6fac0010  ldr         $t4, 0x10($sp)
    ctx->pc = 0x102e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x102e08: 0xb14c001f  sdl         $t4, 0x1F($t2)
    ctx->pc = 0x102e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e0c: 0xb54c0018  sdr         $t4, 0x18($t2)
    ctx->pc = 0x102e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e10: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
    // 0x102e14: 0x6bac001f  ldl         $t4, 0x1F($sp)
    ctx->pc = 0x102e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x102e18: 0x6fac0018  ldr         $t4, 0x18($sp)
    ctx->pc = 0x102e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x102e1c: 0xb14c002f  sdl         $t4, 0x2F($t2)
    ctx->pc = 0x102e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e20: 0xb54c0028  sdr         $t4, 0x28($t2)
    ctx->pc = 0x102e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e24: 0x25291628  addiu       $t1, $t1, 0x1628
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5672));
    // 0x102e28: 0x6bac0027  ldl         $t4, 0x27($sp)
    ctx->pc = 0x102e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x102e2c: 0x6fac0020  ldr         $t4, 0x20($sp)
    ctx->pc = 0x102e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x102e30: 0xb14c0037  sdl         $t4, 0x37($t2)
    ctx->pc = 0x102e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e34: 0xb54c0030  sdr         $t4, 0x30($t2)
    ctx->pc = 0x102e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e38: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x102e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x102e3c: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x102e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x102e40: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x102e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x102e44: 0xb0cc0007  sdl         $t4, 0x7($a2)
    ctx->pc = 0x102e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e48: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
    // 0x102e4c: 0xb4cc0000  sdr         $t4, 0x0($a2)
    ctx->pc = 0x102e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e50: 0x252914e0  addiu       $t1, $t1, 0x14E0
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5344));
    // 0x102e54: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x102e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x102e58: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x102e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x102e5c: 0xb0ac0007  sdl         $t4, 0x7($a1)
    ctx->pc = 0x102e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e60: 0x898021  addu        $s0, $a0, $t1
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x102e64: 0xb4ac0000  sdr         $t4, 0x0($a1)
    ctx->pc = 0x102e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e68: 0x24088000  addiu       $t0, $zero, -0x8000
    ctx->pc = 0x102e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x102e6c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x102e6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102e70: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x102e74: 0xdd4d0028  ld          $t5, 0x28($t2)
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x102e78: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x102e78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102e7c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x102e7cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x102e80: 0xdd460000  ld          $a2, 0x0($t2)
    ctx->pc = 0x102e80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x102e84: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x102e84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 11)));
    // 0x102e88: 0xd133e  dsrl32      $v0, $t5, 12
    ctx->pc = 0x102e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) >> (32 + 12));
    // 0x102e8c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x102e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x102e90: 0x868e0000  lh          $t6, 0x0($s4)
    ctx->pc = 0x102e90u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x102e94: 0xde0c0008  ld          $t4, 0x8($s0)
    ctx->pc = 0x102e94u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x102e98: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x102e98u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x102e9c: 0xdd470018  ld          $a3, 0x18($t2)
    ctx->pc = 0x102e9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x102ea0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x102ea0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2047u)));
    // 0x102ea4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x102ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ea8: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x102ea8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x102eac: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x102eacu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x102eb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x102eb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x102eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x102eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102eb8: 0x2409fff0  addiu       $t1, $zero, -0x10
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x102ebc: 0xdd4b0010  ld          $t3, 0x10($t2)
    ctx->pc = 0x102ebcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x102ec0: 0x31ce01ff  andi        $t6, $t6, 0x1FF
    ctx->pc = 0x102ec0u;
    SET_GPR_VEC(ctx, 14, PS2_PAND(GPR_VEC(ctx, 14), _mm_cvtsi32_si128((int)511u)));
    // 0x102ec4: 0x1896024  and         $t4, $t4, $t1
    ctx->pc = 0x102ec4u;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 9)));
    // 0x102ec8: 0xf53824  and         $a3, $a3, $s5
    ctx->pc = 0x102ec8u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 21)));
    // 0x102ecc: 0xcf3025  or          $a2, $a2, $t7
    ctx->pc = 0x102eccu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 15)));
    // 0x102ed0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x102ed0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2047u)));
    // 0x102ed4: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x102ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x102ed8: 0x3c11ff80  lui         $s1, 0xFF80
    ctx->pc = 0x102ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65408 << 16));
    // 0x102edc: 0x36310fff  ori         $s1, $s1, 0xFFF
    ctx->pc = 0x102edcu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)4095u)));
    // 0x102ee0: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x102ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x102ee4: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x102ee4u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)65535u)));
    // 0x102ee8: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x102ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x102eec: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x102eecu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)65535u)));
    // 0x102ef0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x102ef0u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x102ef4: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x102ef4u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 14)));
    // 0x102ef8: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x102ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x102efc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x102efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102f00: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x102f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x102f04: 0x1b16824  and         $t5, $t5, $s1
    ctx->pc = 0x102f04u;
    SET_GPR_VEC(ctx, 13, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 17)));
    // 0x102f08: 0x3c09ffc0  lui         $t1, 0xFFC0
    ctx->pc = 0x102f08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65472 << 16));
    // 0x102f0c: 0x352907ff  ori         $t1, $t1, 0x7FF
    ctx->pc = 0x102f0cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)2047u)));
    // 0x102f10: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x102f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x102f14: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x102f14u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x102f18: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x102f18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x102f1c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x102f1cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x102f20: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x102f20u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x102f24: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x102f24u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x102f28: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x102f28u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 13), GPR_VEC(ctx, 2)));
    // 0x102f2c: 0x1755824  and         $t3, $t3, $s5
    ctx->pc = 0x102f2cu;
    SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 21)));
    // 0x102f30: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x102f30u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102f34: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x102f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x102f38: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x102f38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x102f3c: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x102f3cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 5)));
    // 0x102f40: 0x16e5825  or          $t3, $t3, $t6
    ctx->pc = 0x102f40u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), GPR_VEC(ctx, 14)));
    // 0x102f44: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x102f44u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102f48: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x102f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x102f4c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x102f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x102f50: 0xfd470018  sd          $a3, 0x18($t2)
    ctx->pc = 0x102f50u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 7));
    // 0x102f54: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x102f54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x102f58: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x102f58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x102f5c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x102f60: 0xfd4b0010  sd          $t3, 0x10($t2)
    ctx->pc = 0x102f60u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 11));
    // 0x102f64: 0x3c0e0014  lui         $t6, 0x14
    ctx->pc = 0x102f64u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20 << 16));
    // 0x102f68: 0xfd4d0028  sd          $t5, 0x28($t2)
    ctx->pc = 0x102f68u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
    // 0x102f6c: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x102f6cu;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), GPR_VEC(ctx, 9)));
    // 0x102f70: 0x25ce14f0  addiu       $t6, $t6, 0x14F0
    ctx->pc = 0x102f70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 5360));
    // 0x102f74: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x102f74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x102f78: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x102f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f80: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x102f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x102f84: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x102f88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x102f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f8c: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x102f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x102f90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f94: 0xc043248  jal         func_10C920
    ctx->pc = 0x102F94u;
    SET_GPR_U32(ctx, 31, 0x102F9Cu);
    ctx->pc = 0x102F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102F94u;
            // 0x102f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C920u;
    if (runtime->hasFunction(0x10C920u)) {
        auto targetFn = runtime->lookupFunction(0x10C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102F9Cu; }
        if (ctx->pc != 0x102F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDrawEnv_0x10c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102F9Cu; }
        if (ctx->pc != 0x102F9Cu) { return; }
    }
    ctx->pc = 0x102F9Cu;
    // 0x102f9c: 0xde030080  ld          $v1, 0x80($s0)
    ctx->pc = 0x102f9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x102fa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102fa4: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x102fa8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x102fa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x102fac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x102facu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x102fb0: 0x2407f00f  addiu       $a3, $zero, -0xFF1
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x102fb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x102fb4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x102fb8: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x102fb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102fbc: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x102fbcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x102fc0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x102fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x102fc4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x102fc4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x102fc8: 0x2402cfff  addiu       $v0, $zero, -0x3001
    ctx->pc = 0x102fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x102fcc: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x102fccu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)511u)));
    // 0x102fd0: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x102fd0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 21)));
    // 0x102fd4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x102fd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x102fd8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x102fd8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x102fdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x102fdcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x102fe0: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x102fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x102fe4: 0xfe030080  sd          $v1, 0x80($s0)
    ctx->pc = 0x102fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 3));
    // 0x102fe8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x102fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x102fec: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x102FECu;
    {
        const bool branch_taken_0x102fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102FECu;
            // 0x102ff0: 0xfe040010  sd          $a0, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fec) {
            ctx->pc = 0x102D68u;
            goto label_102d68;
        }
    }
    ctx->pc = 0x102FF4u;
    // 0x102ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ff8: 0xa7808494  sh          $zero, -0x7B6C($gp)
    ctx->pc = 0x102ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 0));
    // 0x102ffc: 0xa7828496  sh          $v0, -0x7B6A($gp)
    ctx->pc = 0x102ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 2));
    // 0x103000: 0xf  sync
    ctx->pc = 0x103000u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x103004: 0xc043948  jal         func_10E520
    ctx->pc = 0x103004u;
    SET_GPR_U32(ctx, 31, 0x10300Cu);
    ctx->pc = 0x103008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103004u;
            // 0x103008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10300Cu; }
        if (ctx->pc != 0x10300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10300Cu; }
        if (ctx->pc != 0x10300Cu) { return; }
    }
    ctx->pc = 0x10300Cu;
    // 0x10300c: 0xc0432fc  jal         func_10CBF0
    ctx->pc = 0x10300Cu;
    SET_GPR_U32(ctx, 31, 0x103014u);
    ctx->pc = 0x103010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10300Cu;
            // 0x103010: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBF0u;
    if (runtime->hasFunction(0x10CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103014u; }
        if (ctx->pc != 0x103014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103014u; }
        if (ctx->pc != 0x103014u) { return; }
    }
    ctx->pc = 0x103014u;
    // 0x103014: 0x97848494  lhu         $a0, -0x7B6C($gp)
    ctx->pc = 0x103014u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x103018: 0x26c2fff0  addiu       $v0, $s6, -0x10
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x10301c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x103020: 0x3c081200  lui         $t0, 0x1200
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4608 << 16));
    // 0x103024: 0x972018  mult        $a0, $a0, $s7
    ctx->pc = 0x103024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x103028: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x103028u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)32u)));
    // 0x10302c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x10302cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x103030: 0x3c091200  lui         $t1, 0x1200
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4608 << 16));
    // 0x103034: 0x34c60070  ori         $a2, $a2, 0x70
    ctx->pc = 0x103034u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)112u)));
    // 0x103038: 0x35290090  ori         $t1, $t1, 0x90
    ctx->pc = 0x103038u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)144u)));
    // 0x10303c: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x103040: 0x3c0a1200  lui         $t2, 0x1200
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4608 << 16));
    // 0x103044: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x103044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103048: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x103048u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)128u)));
    // 0x10304c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x10304cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103050: 0x354a00a0  ori         $t2, $t2, 0xA0
    ctx->pc = 0x103050u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)160u)));
    // 0x103054: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x103054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x103058: 0x240d0090  addiu       $t5, $zero, 0x90
    ctx->pc = 0x103058u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x10305c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10305cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x103060: 0x34a500e0  ori         $a1, $a1, 0xE0
    ctx->pc = 0x103060u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)224u)));
    // 0x103064: 0x3c0c0014  lui         $t4, 0x14
    ctx->pc = 0x103064u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20 << 16));
    // 0x103068: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x103068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10306c: 0x258b14e0  addiu       $t3, $t4, 0x14E0
    ctx->pc = 0x10306cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 5344));
    // 0x103070: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x103070u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x103074: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x103074u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x103078: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x103078u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x10307c: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x10307cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x103080: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x103080u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x103084: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x103084u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x103088: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x103088u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x10308c: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x10308cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x103090: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x103090u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x103094: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x103094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x103098: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x103098u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x10309c: 0x97848496  lhu         $a0, -0x7B6A($gp)
    ctx->pc = 0x10309cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935702)));
    // 0x1030a0: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x1030a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1030a4: 0xc0432c2  jal         func_10CB08
    ctx->pc = 0x1030A4u;
    SET_GPR_U32(ctx, 31, 0x1030ACu);
    ctx->pc = 0x1030A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1030A4u;
            // 0x1030a8: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB08u;
    if (runtime->hasFunction(0x10CB08u)) {
        auto targetFn = runtime->lookupFunction(0x10CB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030ACu; }
        if (ctx->pc != 0x1030ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030ACu; }
        if (ctx->pc != 0x1030ACu) { return; }
    }
    ctx->pc = 0x1030ACu;
    // 0x1030ac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1030acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1030b0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1030b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1030b4: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x1030b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1030b8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1030b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1030bc: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1030bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1030c0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1030c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1030c4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1030c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1030c8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1030cc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1030ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1030d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1030d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1030d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1030D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1030D4u;
            // 0x1030d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102D68u: goto label_102d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1030DCu;
}
