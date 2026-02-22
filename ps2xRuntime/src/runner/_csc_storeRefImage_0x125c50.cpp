#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _csc_storeRefImage
// Address: 0x125c50 - 0x125ea4
void _csc_storeRefImage_0x125c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125c50u;

    // 0x125c50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x125c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x125c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x125c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125c58: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x125c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x125c5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c60: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x125c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x125c64: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x125c64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x125c68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x125c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x125c6c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x125c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x125c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c74: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x125c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x125c78: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x125c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x125c7c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x125c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x125c80: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x125c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x125c84: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x125c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x125c88: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x125c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x125c8c: 0x8fc417bc  lw          $a0, 0x17BC($fp)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6076)));
    // 0x125c90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125c94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x125c98: 0x8c930040  lw          $s3, 0x40($a0)
    ctx->pc = 0x125c98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x125c9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x125c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125ca0: 0xc047de0  jal         func_11F780
    ctx->pc = 0x125CA0u;
    SET_GPR_U32(ctx, 31, 0x125CA8u);
    ctx->pc = 0x125CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125CA0u;
            // 0x125ca4: 0xc28818  mult        $s1, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125CA8u; }
        if (ctx->pc != 0x125CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125CA8u; }
        if (ctx->pc != 0x125CA8u) { return; }
    }
    ctx->pc = 0x125CA8u;
    // 0x125ca8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125cac: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x125cacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x125cb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125cb4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x125cb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x125cb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125CB8u;
    {
        const bool branch_taken_0x125cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CB8u;
            // 0x125cbc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cb8) {
            ctx->pc = 0x125CC8u;
            goto label_125cc8;
        }
    }
    ctx->pc = 0x125CC0u;
    // 0x125cc0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x125cc4: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x125cc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_125cc8:
    // 0x125cc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125ccc: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x125cccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x125cd0: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
    // 0x125cd4: 0x2a370400  slti        $s7, $s1, 0x400
    ctx->pc = 0x125cd4u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x125cd8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x125cd8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x125cdc: 0x0  nop
    ctx->pc = 0x125cdcu;
    // NOP
label_125ce0:
    // 0x125ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125ce4: 0x0  nop
    ctx->pc = 0x125ce4u;
    // NOP
    // 0x125ce8: 0x0  nop
    ctx->pc = 0x125ce8u;
    // NOP
    // 0x125cec: 0x0  nop
    ctx->pc = 0x125cecu;
    // NOP
    // 0x125cf0: 0x0  nop
    ctx->pc = 0x125cf0u;
    // NOP
    // 0x125cf4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125CE0u;
            goto label_125ce0;
        }
    }
    ctx->pc = 0x125CFCu;
    // 0x125cfc: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x125CFCu;
    SET_GPR_U32(ctx, 31, 0x125D04u);
    ctx->pc = 0x125D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125CFCu;
            // 0x125d00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D04u; }
        if (ctx->pc != 0x125D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D04u; }
        if (ctx->pc != 0x125D04u) { return; }
    }
    ctx->pc = 0x125D04u;
    // 0x125d04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125d08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125d0c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x125d0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
label_125d10:
    // 0x125d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125d14: 0x0  nop
    ctx->pc = 0x125d14u;
    // NOP
    // 0x125d18: 0x0  nop
    ctx->pc = 0x125d18u;
    // NOP
    // 0x125d1c: 0x0  nop
    ctx->pc = 0x125d1cu;
    // NOP
    // 0x125d20: 0x0  nop
    ctx->pc = 0x125d20u;
    // NOP
    // 0x125d24: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125D24u;
    {
        const bool branch_taken_0x125d24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125d24) {
            ctx->pc = 0x125D10u;
            goto label_125d10;
        }
    }
    ctx->pc = 0x125D2Cu;
    // 0x125d2c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x125d30: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x125d34: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x125d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125d38: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x125d38u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)65535u)));
    // 0x125d3c: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x125d3cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x125d40: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x125d40u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x125d44: 0xaea3e4e4  sw          $v1, -0x1B1C($s5)
    ctx->pc = 0x125d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960356), GPR_U32(ctx, 3));
    // 0x125d48: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x125d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125d4c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x125D4Cu;
    {
        const bool branch_taken_0x125d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D4Cu;
            // 0x125d50: 0xae85e4e0  sw          $a1, -0x1B20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d4c) {
            ctx->pc = 0x125E10u;
            goto label_125e10;
        }
    }
    ctx->pc = 0x125D54u;
    // 0x125d54: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x125d58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x125d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125d5c: 0x24a55b78  addiu       $a1, $a1, 0x5B78
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
    // 0x125d60: 0xc0437ec  jal         func_10DFB0
    ctx->pc = 0x125D60u;
    SET_GPR_U32(ctx, 31, 0x125D68u);
    ctx->pc = 0x125D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D60u;
            // 0x125d64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFB0u;
    if (runtime->hasFunction(0x10DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D68u; }
        if (ctx->pc != 0x125D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x10dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D68u; }
        if (ctx->pc != 0x125D68u) { return; }
    }
    ctx->pc = 0x125D68u;
    // 0x125d68: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x125d68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125d70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125d74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x125d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125d78: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x125d78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x125d7c: 0xc043ae0  jal         func_10EB80
    ctx->pc = 0x125D7Cu;
    SET_GPR_U32(ctx, 31, 0x125D84u);
    ctx->pc = 0x125D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D7Cu;
            // 0x125d80: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB80u;
    if (runtime->hasFunction(0x10EB80u)) {
        auto targetFn = runtime->lookupFunction(0x10EB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D84u; }
        if (ctx->pc != 0x125D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x10eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D84u; }
        if (ctx->pc != 0x125D84u) { return; }
    }
    ctx->pc = 0x125D84u;
    // 0x125d84: 0x8ea5e4e4  lw          $a1, -0x1B1C($s5)
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960356)));
    // 0x125d88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125d8c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x125d8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x125d90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125d94: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x125d94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125d98: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x125d98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46112u)));
    // 0x125d9c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x125d9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x125da0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125da4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x125da8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x125da8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46080u)));
    // 0x125dac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x125dacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125db0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x125db4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x125db4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65520u)));
    // 0x125db8: 0x8e83e4e0  lw          $v1, -0x1B20($s4)
    ctx->pc = 0x125db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960352)));
    // 0x125dbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x125dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x125dc0: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x125dc0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 16)));
    // 0x125dc4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x125dc8: 0xaea5e4e4  sw          $a1, -0x1B1C($s5)
    ctx->pc = 0x125dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960356), GPR_U32(ctx, 5));
    // 0x125dcc: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x125DCCu;
    {
        const bool branch_taken_0x125dcc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DCCu;
            // 0x125dd0: 0xae83e4e0  sw          $v1, -0x1B20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dcc) {
            ctx->pc = 0x125DE8u;
            goto label_125de8;
        }
    }
    ctx->pc = 0x125DD4u;
    // 0x125dd4: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125dd8: 0xc0495e2  jal         func_125788
    ctx->pc = 0x125DD8u;
    SET_GPR_U32(ctx, 31, 0x125DE0u);
    ctx->pc = 0x125DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DD8u;
            // 0x125ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125788u;
    if (runtime->hasFunction(0x125788u)) {
        auto targetFn = runtime->lookupFunction(0x125788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DE0u; }
        if (ctx->pc != 0x125DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x125788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DE0u; }
        if (ctx->pc != 0x125DE0u) { return; }
    }
    ctx->pc = 0x125DE0u;
    // 0x125de0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125DE0u;
    {
        const bool branch_taken_0x125de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125de0) {
            ctx->pc = 0x125DF4u;
            goto label_125df4;
        }
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125dec: 0xc04966e  jal         func_1259B8
    ctx->pc = 0x125DECu;
    SET_GPR_U32(ctx, 31, 0x125DF4u);
    ctx->pc = 0x125DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DECu;
            // 0x125df0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1259B8u;
    if (runtime->hasFunction(0x1259B8u)) {
        auto targetFn = runtime->lookupFunction(0x1259B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DF4u; }
        if (ctx->pc != 0x125DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x1259b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DF4u; }
        if (ctx->pc != 0x125DF4u) { return; }
    }
    ctx->pc = 0x125DF4u;
label_125df4:
    // 0x125df4: 0xc043ac6  jal         func_10EB18
    ctx->pc = 0x125DF4u;
    SET_GPR_U32(ctx, 31, 0x125DFCu);
    ctx->pc = 0x125DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DF4u;
            // 0x125df8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB18u;
    if (runtime->hasFunction(0x10EB18u)) {
        auto targetFn = runtime->lookupFunction(0x10EB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DFCu; }
        if (ctx->pc != 0x125DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x10eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DFCu; }
        if (ctx->pc != 0x125DFCu) { return; }
    }
    ctx->pc = 0x125DFCu;
    // 0x125dfc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x125dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e00: 0xc0437f4  jal         func_10DFD0
    ctx->pc = 0x125E00u;
    SET_GPR_U32(ctx, 31, 0x125E08u);
    ctx->pc = 0x125E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E00u;
            // 0x125e04: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFD0u;
    if (runtime->hasFunction(0x10DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E08u; }
        if (ctx->pc != 0x125E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E08u; }
        if (ctx->pc != 0x125E08u) { return; }
    }
    ctx->pc = 0x125E08u;
    // 0x125e08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x125E08u;
    {
        const bool branch_taken_0x125e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E08u;
            // 0x125e0c: 0x8fc417bc  lw          $a0, 0x17BC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e08) {
            ctx->pc = 0x125E64u;
            goto label_125e64;
        }
    }
    ctx->pc = 0x125E10u;
label_125e10:
    // 0x125e10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125e14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125e18: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x125e18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x125e1c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x125e1cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x125e20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x125e20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125e24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125e28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x125e28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125e2c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x125e2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x125e30: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x125e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x125e34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x125e34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125e38: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x125E38u;
    {
        const bool branch_taken_0x125e38 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E38u;
            // 0x125e3c: 0xae80e4e0  sw          $zero, -0x1B20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e38) {
            ctx->pc = 0x125E54u;
            goto label_125e54;
        }
    }
    ctx->pc = 0x125E40u;
    // 0x125e40: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125e44: 0xc0495e2  jal         func_125788
    ctx->pc = 0x125E44u;
    SET_GPR_U32(ctx, 31, 0x125E4Cu);
    ctx->pc = 0x125E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E44u;
            // 0x125e48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125788u;
    if (runtime->hasFunction(0x125788u)) {
        auto targetFn = runtime->lookupFunction(0x125788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E4Cu; }
        if (ctx->pc != 0x125E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x125788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E4Cu; }
        if (ctx->pc != 0x125E4Cu) { return; }
    }
    ctx->pc = 0x125E4Cu;
    // 0x125e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x125E4Cu;
    {
        const bool branch_taken_0x125e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E4Cu;
            // 0x125e50: 0x8fc417bc  lw          $a0, 0x17BC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e4c) {
            ctx->pc = 0x125E64u;
            goto label_125e64;
        }
    }
    ctx->pc = 0x125E54u;
label_125e54:
    // 0x125e54: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x125e58: 0xc04966e  jal         func_1259B8
    ctx->pc = 0x125E58u;
    SET_GPR_U32(ctx, 31, 0x125E60u);
    ctx->pc = 0x125E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E58u;
            // 0x125e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1259B8u;
    if (runtime->hasFunction(0x1259B8u)) {
        auto targetFn = runtime->lookupFunction(0x1259B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E60u; }
        if (ctx->pc != 0x125E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x1259b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E60u; }
        if (ctx->pc != 0x125E60u) { return; }
    }
    ctx->pc = 0x125E60u;
    // 0x125e60: 0x8fc417bc  lw          $a0, 0x17BC($fp)
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 6076)));
label_125e64:
    // 0x125e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125e68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x125e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x125e6c: 0xc047de0  jal         func_11F780
    ctx->pc = 0x125E6Cu;
    SET_GPR_U32(ctx, 31, 0x125E74u);
    ctx->pc = 0x125E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E6Cu;
            // 0x125e70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E74u; }
        if (ctx->pc != 0x125E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E74u; }
        if (ctx->pc != 0x125E74u) { return; }
    }
    ctx->pc = 0x125E74u;
    // 0x125e74: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x125e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125e78: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x125e78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125e7c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x125e7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125e80: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x125e80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125e84: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125e88: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x125e88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125e8c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125e90: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125e94: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x125e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125e98: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x125E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E9Cu;
            // 0x125ea0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125CC8u: goto label_125cc8;
            case 0x125CE0u: goto label_125ce0;
            case 0x125D10u: goto label_125d10;
            case 0x125DE8u: goto label_125de8;
            case 0x125DF4u: goto label_125df4;
            case 0x125E10u: goto label_125e10;
            case 0x125E54u: goto label_125e54;
            case 0x125E64u: goto label_125e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125EA4u;
}
