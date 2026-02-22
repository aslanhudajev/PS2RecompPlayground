#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _doCSC2
// Address: 0x1259b8 - 0x125b78
void _doCSC2_0x1259b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1259b8u;

    // 0x1259b8: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1259bc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1259c0: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1259c0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1259c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1259c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1259c8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1259cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259d0: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x1259d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x1259d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1259d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1259d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1259dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1259e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1259e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1259e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1259e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1259e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1259e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1259ec: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x1259ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x1259f0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1259f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1259f4: 0x3c080075  lui         $t0, 0x75
    ctx->pc = 0x1259f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)117 << 16));
    // 0x1259f8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1259F8u;
    {
        const bool branch_taken_0x1259f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259f8) {
            ctx->pc = 0x1259FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1259F8u;
            // 0x1259fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A00u;
            goto label_125a00;
        }
    }
    ctx->pc = 0x125A00u;
label_125a00:
    // 0x125a00: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x125a00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x125a04: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x125a04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x125a08: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x125a0c: 0xac45e4d0  sw          $a1, -0x1B30($v0)
    ctx->pc = 0x125a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960336), GPR_U32(ctx, 5));
    // 0x125a10: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125a14: 0xacc3e4d4  sw          $v1, -0x1B2C($a2)
    ctx->pc = 0x125a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960340), GPR_U32(ctx, 3));
    // 0x125a18: 0xac8021c0  sw          $zero, 0x21C0($a0)
    ctx->pc = 0x125a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8640), GPR_U32(ctx, 0));
    // 0x125a1c: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x125a1cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8208u)));
    // 0x125a20: 0xae4021b8  sw          $zero, 0x21B8($s2)
    ctx->pc = 0x125a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8632), GPR_U32(ctx, 0));
    // 0x125a24: 0x3812  mflo        $a3
    ctx->pc = 0x125a24u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x125a28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x125a2c: 0xad07e4d8  sw          $a3, -0x1B28($t0)
    ctx->pc = 0x125a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960344), GPR_U32(ctx, 7));
label_125a30:
    // 0x125a30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125a34: 0x0  nop
    ctx->pc = 0x125a34u;
    // NOP
    // 0x125a38: 0x0  nop
    ctx->pc = 0x125a38u;
    // NOP
    // 0x125a3c: 0x0  nop
    ctx->pc = 0x125a3cu;
    // NOP
    // 0x125a40: 0x0  nop
    ctx->pc = 0x125a40u;
    // NOP
    // 0x125a44: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125A44u;
    {
        const bool branch_taken_0x125a44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125a44) {
            ctx->pc = 0x125A30u;
            goto label_125a30;
        }
    }
    ctx->pc = 0x125A4Cu;
    // 0x125a4c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x125a50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125a54: 0x24a55870  addiu       $a1, $a1, 0x5870
    ctx->pc = 0x125a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22640));
    // 0x125a58: 0xc0437ec  jal         func_10DFB0
    ctx->pc = 0x125A58u;
    SET_GPR_U32(ctx, 31, 0x125A60u);
    ctx->pc = 0x125A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125A58u;
            // 0x125a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFB0u;
    if (runtime->hasFunction(0x10DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A60u; }
        if (ctx->pc != 0x125A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x10dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A60u; }
        if (ctx->pc != 0x125A60u) { return; }
    }
    ctx->pc = 0x125A60u;
    // 0x125a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125a68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125a6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x125a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125a70: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x125a70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x125a74: 0xc043ae0  jal         func_10EB80
    ctx->pc = 0x125A74u;
    SET_GPR_U32(ctx, 31, 0x125A7Cu);
    ctx->pc = 0x125A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125A74u;
            // 0x125a78: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB80u;
    if (runtime->hasFunction(0x10EB80u)) {
        auto targetFn = runtime->lookupFunction(0x10EB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A7Cu; }
        if (ctx->pc != 0x125A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x10eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A7Cu; }
        if (ctx->pc != 0x125A7Cu) { return; }
    }
    ctx->pc = 0x125A7Cu;
    // 0x125a7c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x125a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x125a80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125a84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x125a84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x125a88: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x125a88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45072u)));
    // 0x125a8c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x125a8cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x125a90: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125a94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x125a94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125a98: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x125a98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x125a9c: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x125a9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x125aa0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125aa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125aa4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125aa8: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x125aa8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)45056u)));
    // 0x125aac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x125aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x125ab0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125ab4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x125ab8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x125ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x125abc: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x125abcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1023u)));
    // 0x125ac0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x125ac0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x125ac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x125ac4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125ac8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x125ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125acc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x125accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x125ad0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x125ad4: 0x8c4417bc  lw          $a0, 0x17BC($v0)
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x125ad8: 0xc047de0  jal         func_11F780
    ctx->pc = 0x125AD8u;
    SET_GPR_U32(ctx, 31, 0x125AE0u);
    ctx->pc = 0x125ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125AD8u;
            // 0x125adc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125AE0u; }
        if (ctx->pc != 0x125AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125AE0u; }
        if (ctx->pc != 0x125AE0u) { return; }
    }
    ctx->pc = 0x125AE0u;
    // 0x125ae0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x125ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x125ae4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x125ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x125ae8: 0x8c43e4d8  lw          $v1, -0x1B28($v0)
    ctx->pc = 0x125ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960344)));
    // 0x125aec: 0x0  nop
    ctx->pc = 0x125aecu;
    // NOP
label_125af0:
    // 0x125af0: 0x8c8221c0  lw          $v0, 0x21C0($a0)
    ctx->pc = 0x125af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8640)));
    // 0x125af4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x125af8: 0x0  nop
    ctx->pc = 0x125af8u;
    // NOP
    // 0x125afc: 0x0  nop
    ctx->pc = 0x125afcu;
    // NOP
    // 0x125b00: 0x0  nop
    ctx->pc = 0x125b00u;
    // NOP
    // 0x125b04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125B04u;
    {
        const bool branch_taken_0x125b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125b04) {
            ctx->pc = 0x125AF0u;
            goto label_125af0;
        }
    }
    ctx->pc = 0x125B0Cu;
    // 0x125b0c: 0x8e4221b8  lw          $v0, 0x21B8($s2)
    ctx->pc = 0x125b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8632)));
    // 0x125b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125B10u;
    {
        const bool branch_taken_0x125b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B10u;
            // 0x125b14: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b10) {
            ctx->pc = 0x125B28u;
            goto label_125b28;
        }
    }
    ctx->pc = 0x125B18u;
    // 0x125b18: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x125b1c: 0xc048006  jal         func_120018
    ctx->pc = 0x125B1Cu;
    SET_GPR_U32(ctx, 31, 0x125B24u);
    ctx->pc = 0x125B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125B1Cu;
            // 0x125b20: 0x24845098  addiu       $a0, $a0, 0x5098 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B24u; }
        if (ctx->pc != 0x125B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B24u; }
        if (ctx->pc != 0x125B24u) { return; }
    }
    ctx->pc = 0x125B24u;
    // 0x125b24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_125b28:
    // 0x125b28: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x125b28u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x125b2c: 0x0  nop
    ctx->pc = 0x125b2cu;
    // NOP
label_125b30:
    // 0x125b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125b30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125b34: 0x0  nop
    ctx->pc = 0x125b34u;
    // NOP
    // 0x125b38: 0x0  nop
    ctx->pc = 0x125b38u;
    // NOP
    // 0x125b3c: 0x0  nop
    ctx->pc = 0x125b3cu;
    // NOP
    // 0x125b40: 0x0  nop
    ctx->pc = 0x125b40u;
    // NOP
    // 0x125b44: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125B44u;
    {
        const bool branch_taken_0x125b44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125b44) {
            ctx->pc = 0x125B30u;
            goto label_125b30;
        }
    }
    ctx->pc = 0x125B4Cu;
    // 0x125b4c: 0xc043ac6  jal         func_10EB18
    ctx->pc = 0x125B4Cu;
    SET_GPR_U32(ctx, 31, 0x125B54u);
    ctx->pc = 0x125B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125B4Cu;
            // 0x125b50: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB18u;
    if (runtime->hasFunction(0x10EB18u)) {
        auto targetFn = runtime->lookupFunction(0x10EB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B54u; }
        if (ctx->pc != 0x125B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x10eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B54u; }
        if (ctx->pc != 0x125B54u) { return; }
    }
    ctx->pc = 0x125B54u;
    // 0x125b54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x125b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125b58: 0xc0437f4  jal         func_10DFD0
    ctx->pc = 0x125B58u;
    SET_GPR_U32(ctx, 31, 0x125B60u);
    ctx->pc = 0x125B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125B58u;
            // 0x125b5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFD0u;
    if (runtime->hasFunction(0x10DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B60u; }
        if (ctx->pc != 0x125B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125B60u; }
        if (ctx->pc != 0x125B60u) { return; }
    }
    ctx->pc = 0x125B60u;
    // 0x125b60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x125b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125b64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x125b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125b68: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x125b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125b6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125b70: 0x3e00008  jr          $ra
    ctx->pc = 0x125B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B70u;
            // 0x125b74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A00u: goto label_125a00;
            case 0x125A30u: goto label_125a30;
            case 0x125AF0u: goto label_125af0;
            case 0x125B28u: goto label_125b28;
            case 0x125B30u: goto label_125b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125B78u;
}
