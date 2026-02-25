#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _doCSC2
// Address: 0x129da0 - 0x129f60
void _doCSC2_0x129da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_doCSC2_0x129da0");
#endif

    ctx->pc = 0x129da0u;

    // 0x129da0: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x129da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x129da4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x129da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x129da8: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x129da8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129dac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x129dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x129db0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x129db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x129db4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129db8: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x129db8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)64512u)));
    // 0x129dbc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x129dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x129dc0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x129dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x129dc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x129dc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x129dc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x129dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x129dcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x129dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x129dd0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x129dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x129dd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129dd4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129dd8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129DD8u;
    {
        const bool branch_taken_0x129dd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x129dd8) {
            ctx->pc = 0x129DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129DD8u;
            // 0x129ddc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129DE0u;
            goto label_129de0;
        }
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129de4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x129de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x129de8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x129decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x129df0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x129df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129df4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x129df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x129df8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x129df8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x129dfc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x129dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x129e00: 0x4012  mflo        $t0
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x129e04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x129e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x129e08: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x129e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x129e0c: 0x0  nop
    ctx->pc = 0x129e0cu;
    // NOP
label_129e10:
    // 0x129e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129e14: 0x0  nop
    ctx->pc = 0x129e14u;
    // NOP
    // 0x129e18: 0x0  nop
    ctx->pc = 0x129e18u;
    // NOP
    // 0x129e1c: 0x0  nop
    ctx->pc = 0x129e1cu;
    // NOP
    // 0x129e20: 0x0  nop
    ctx->pc = 0x129e20u;
    // NOP
    // 0x129e24: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129E24u;
    {
        const bool branch_taken_0x129e24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129e24) {
            ctx->pc = 0x129E10u;
            goto label_129e10;
        }
    }
    ctx->pc = 0x129E2Cu;
    // 0x129e2c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x129e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x129e30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129e34: 0x24a59c58  addiu       $a1, $a1, -0x63A8
    ctx->pc = 0x129e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941784));
    // 0x129e38: 0xc04ba60  jal         func_12E980
    ctx->pc = 0x129E38u;
    SET_GPR_U32(ctx, 31, 0x129E40u);
    ctx->pc = 0x129E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E38u;
            // 0x129e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E980u;
    if (runtime->hasFunction(0x12E980u)) {
        auto targetFn = runtime->lookupFunction(0x12E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E40u; }
        if (ctx->pc != 0x129E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler2_0x12e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E40u; }
        if (ctx->pc != 0x129E40u) { return; }
    }
    ctx->pc = 0x129E40u;
    // 0x129e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x129e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x129e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x129e48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129e4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x129e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129e50: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x129e50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x129e54: 0xc04be1e  jal         func_12F878
    ctx->pc = 0x129E54u;
    SET_GPR_U32(ctx, 31, 0x129E5Cu);
    ctx->pc = 0x129E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E54u;
            // 0x129e58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F878u;
    if (runtime->hasFunction(0x12F878u)) {
        auto targetFn = runtime->lookupFunction(0x12F878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E5Cu; }
        if (ctx->pc != 0x129E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x12f878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E5Cu; }
        if (ctx->pc != 0x129E5Cu) { return; }
    }
    ctx->pc = 0x129E5Cu;
    // 0x129e5c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x129E5Cu;
    SET_GPR_U32(ctx, 31, 0x129E64u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E64u; }
        if (ctx->pc != 0x129E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E64u; }
        if (ctx->pc != 0x129E64u) { return; }
    }
    ctx->pc = 0x129E64u;
    // 0x129e64: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x129e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x129e68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129e6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x129e6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x129e70: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x129e70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45072u)));
    // 0x129e74: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x129e74u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x129e78: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x129e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x129e7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129e7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129e80: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x129e80u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)45088u)));
    // 0x129e84: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x129e84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x129e88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129e8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x129e8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129e90: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x129e90u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45056u)));
    // 0x129e94: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x129e98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129e98u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129E9Cu;
    {
        const bool branch_taken_0x129e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E9Cu;
            // 0x129ea0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e9c) {
            ctx->pc = 0x129EB0u;
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129EA4u;
    // 0x129ea4: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x129EA4u;
    SET_GPR_U32(ctx, 31, 0x129EACu);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EACu; }
        if (ctx->pc != 0x129EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EACu; }
        if (ctx->pc != 0x129EACu) { return; }
    }
    ctx->pc = 0x129EACu;
    // 0x129eac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_129eb0:
    // 0x129eb0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x129eb4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x129eb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x129eb8: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x129eb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1023u)));
    // 0x129ebc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x129ebcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129ec0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x129ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129ec4: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x129ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x129ec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ecc: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x129ECCu;
    SET_GPR_U32(ctx, 31, 0x129ED4u);
    ctx->pc = 0x129ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129ECCu;
            // 0x129ed0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129ED4u; }
        if (ctx->pc != 0x129ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129ED4u; }
        if (ctx->pc != 0x129ED4u) { return; }
    }
    ctx->pc = 0x129ED4u;
    // 0x129ed4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x129ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129ed8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x129ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129edc: 0x0  nop
    ctx->pc = 0x129edcu;
    // NOP
label_129ee0:
    // 0x129ee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129ee4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x129ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x129ee8: 0x0  nop
    ctx->pc = 0x129ee8u;
    // NOP
    // 0x129eec: 0x0  nop
    ctx->pc = 0x129eecu;
    // NOP
    // 0x129ef0: 0x0  nop
    ctx->pc = 0x129ef0u;
    // NOP
    // 0x129ef4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129EF4u;
    {
        const bool branch_taken_0x129ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ef4) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129EFCu;
    // 0x129efc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129EFCu;
    {
        const bool branch_taken_0x129efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EFCu;
            // 0x129f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129efc) {
            ctx->pc = 0x129F10u;
            goto label_129f10;
        }
    }
    ctx->pc = 0x129F04u;
    // 0x129f04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x129f08: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x129F08u;
    SET_GPR_U32(ctx, 31, 0x129F10u);
    ctx->pc = 0x129F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F08u;
            // 0x129f0c: 0x24a5f3d0  addiu       $a1, $a1, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F10u; }
        if (ctx->pc != 0x129F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F10u; }
        if (ctx->pc != 0x129F10u) { return; }
    }
    ctx->pc = 0x129F10u;
label_129f10:
    // 0x129f10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129f14: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x129f14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
label_129f18:
    // 0x129f18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x129f1c: 0x0  nop
    ctx->pc = 0x129f1cu;
    // NOP
    // 0x129f20: 0x0  nop
    ctx->pc = 0x129f20u;
    // NOP
    // 0x129f24: 0x0  nop
    ctx->pc = 0x129f24u;
    // NOP
    // 0x129f28: 0x0  nop
    ctx->pc = 0x129f28u;
    // NOP
    // 0x129f2c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129F2Cu;
    {
        const bool branch_taken_0x129f2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129f2c) {
            ctx->pc = 0x129F18u;
            goto label_129f18;
        }
    }
    ctx->pc = 0x129F34u;
    // 0x129f34: 0xc04be04  jal         func_12F810
    ctx->pc = 0x129F34u;
    SET_GPR_U32(ctx, 31, 0x129F3Cu);
    ctx->pc = 0x129F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F34u;
            // 0x129f38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F810u;
    if (runtime->hasFunction(0x12F810u)) {
        auto targetFn = runtime->lookupFunction(0x12F810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F3Cu; }
        if (ctx->pc != 0x129F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x12f810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F3Cu; }
        if (ctx->pc != 0x129F3Cu) { return; }
    }
    ctx->pc = 0x129F3Cu;
    // 0x129f3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f40: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x129F40u;
    SET_GPR_U32(ctx, 31, 0x129F48u);
    ctx->pc = 0x129F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F40u;
            // 0x129f44: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (runtime->hasFunction(0x12E990u)) {
        auto targetFn = runtime->lookupFunction(0x12E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F48u; }
        if (ctx->pc != 0x129F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x12e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F48u; }
        if (ctx->pc != 0x129F48u) { return; }
    }
    ctx->pc = 0x129F48u;
    // 0x129f48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x129f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129f4c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x129f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129f50: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x129f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129f54: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129f58: 0x3e00008  jr          $ra
    ctx->pc = 0x129F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F58u;
            // 0x129f5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129DE0u: goto label_129de0;
            case 0x129E10u: goto label_129e10;
            case 0x129EB0u: goto label_129eb0;
            case 0x129EE0u: goto label_129ee0;
            case 0x129F10u: goto label_129f10;
            case 0x129F18u: goto label_129f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129F60u;
}
