#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _csc_storeRefImage
// Address: 0x12a038 - 0x12a2c0
void _csc_storeRefImage_0x12a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_csc_storeRefImage_0x12a038");
#endif

    ctx->pc = 0x12a038u;

    // 0x12a038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12a038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12a03c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a040: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x12a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x12a044: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x12a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x12a048: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x12a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12a04c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12a04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a050: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12a054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12a054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a058: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x12a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x12a05c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12a05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a060: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x12a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x12a064: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x12a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x12a068: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12a06c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a070: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x12a074: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x12a074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12a078: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12A078u;
    SET_GPR_U32(ctx, 31, 0x12A080u);
    ctx->pc = 0x12A07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A078u;
            // 0x12a07c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A080u; }
        if (ctx->pc != 0x12A080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A080u; }
        if (ctx->pc != 0x12A080u) { return; }
    }
    ctx->pc = 0x12A080u;
    // 0x12a080: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a084: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x12a084u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x12a088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12a088u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12a08c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x12a08cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x12a090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A090u;
    {
        const bool branch_taken_0x12a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A090u;
            // 0x12a094: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a090) {
            ctx->pc = 0x12A0A0u;
            goto label_12a0a0;
        }
    }
    ctx->pc = 0x12A098u;
    // 0x12a098: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x12a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x12a09c: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x12a09cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_12a0a0:
    // 0x12a0a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a0a4: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x12a0a4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12a0a8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x12a0a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x12a0ac: 0x0  nop
    ctx->pc = 0x12a0acu;
    // NOP
label_12a0b0:
    // 0x12a0b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12a0b4: 0x0  nop
    ctx->pc = 0x12a0b4u;
    // NOP
    // 0x12a0b8: 0x0  nop
    ctx->pc = 0x12a0b8u;
    // NOP
    // 0x12a0bc: 0x0  nop
    ctx->pc = 0x12a0bcu;
    // NOP
    // 0x12a0c0: 0x0  nop
    ctx->pc = 0x12a0c0u;
    // NOP
    // 0x12a0c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A0C4u;
    {
        const bool branch_taken_0x12a0c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a0c4) {
            ctx->pc = 0x12A0B0u;
            goto label_12a0b0;
        }
    }
    ctx->pc = 0x12A0CCu;
    // 0x12a0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0d0: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x12A0D0u;
    SET_GPR_U32(ctx, 31, 0x12A0D8u);
    ctx->pc = 0x12A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0D0u;
            // 0x12a0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0D8u; }
        if (ctx->pc != 0x12A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A0D8u; }
        if (ctx->pc != 0x12A0D8u) { return; }
    }
    ctx->pc = 0x12A0D8u;
    // 0x12a0d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12a0dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a0e0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x12a0e0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8208u)));
    // 0x12a0e4: 0x0  nop
    ctx->pc = 0x12a0e4u;
    // NOP
label_12a0e8:
    // 0x12a0e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x12a0ec: 0x0  nop
    ctx->pc = 0x12a0ecu;
    // NOP
    // 0x12a0f0: 0x0  nop
    ctx->pc = 0x12a0f0u;
    // NOP
    // 0x12a0f4: 0x0  nop
    ctx->pc = 0x12a0f4u;
    // NOP
    // 0x12a0f8: 0x0  nop
    ctx->pc = 0x12a0f8u;
    // NOP
    // 0x12a0fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A0FCu;
    {
        const bool branch_taken_0x12a0fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a0fc) {
            ctx->pc = 0x12A0E8u;
            goto label_12a0e8;
        }
    }
    ctx->pc = 0x12A104u;
    // 0x12a104: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x12a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12a108: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x12a108u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x12a10c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x12a10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12a110: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x12a110u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)65535u)));
    // 0x12a114: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x12a114u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 17)));
    // 0x12a118: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x12a118u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x12a11c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x12a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x12a120: 0x282202b  sltu        $a0, $s4, $v0
    ctx->pc = 0x12a120u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a124: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12A124u;
    {
        const bool branch_taken_0x12a124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A124u;
            // 0x12a128: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a124) {
            ctx->pc = 0x12A210u;
            goto label_12a210;
        }
    }
    ctx->pc = 0x12A12Cu;
    // 0x12a12c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12a130: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12a134: 0x24a59f60  addiu       $a1, $a1, -0x60A0
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942560));
    // 0x12a138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a13c: 0xc04ba60  jal         func_12E980
    ctx->pc = 0x12A13Cu;
    SET_GPR_U32(ctx, 31, 0x12A144u);
    ctx->pc = 0x12A140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A13Cu;
            // 0x12a140: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E980u;
    if (runtime->hasFunction(0x12E980u)) {
        auto targetFn = runtime->lookupFunction(0x12E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A144u; }
        if (ctx->pc != 0x12A144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler2_0x12e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A144u; }
        if (ctx->pc != 0x12A144u) { return; }
    }
    ctx->pc = 0x12A144u;
    // 0x12a144: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a148: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x12a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a14c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12a150: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12a154: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x12a154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x12a158: 0xc04be1e  jal         func_12F878
    ctx->pc = 0x12A158u;
    SET_GPR_U32(ctx, 31, 0x12A160u);
    ctx->pc = 0x12A15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A158u;
            // 0x12a15c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F878u;
    if (runtime->hasFunction(0x12F878u)) {
        auto targetFn = runtime->lookupFunction(0x12F878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A160u; }
        if (ctx->pc != 0x12A160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x12f878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A160u; }
        if (ctx->pc != 0x12A160u) { return; }
    }
    ctx->pc = 0x12A160u;
    // 0x12a160: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12A160u;
    SET_GPR_U32(ctx, 31, 0x12A168u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A168u; }
        if (ctx->pc != 0x12A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A168u; }
        if (ctx->pc != 0x12A168u) { return; }
    }
    ctx->pc = 0x12A168u;
    // 0x12a168: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x12a168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a16c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a170: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x12a170u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x12a174: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12a174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12a178: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12a178u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x12a17c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x12a17cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x12a180: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x12a180u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x12a184: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a188: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x12a188u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x12a18c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x12a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x12a190: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12a190u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12a194: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A194u;
    {
        const bool branch_taken_0x12a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A194u;
            // 0x12a198: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a194) {
            ctx->pc = 0x12A1A8u;
            goto label_12a1a8;
        }
    }
    ctx->pc = 0x12A19Cu;
    // 0x12a19c: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12A19Cu;
    SET_GPR_U32(ctx, 31, 0x12A1A4u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1A4u; }
        if (ctx->pc != 0x12A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1A4u; }
        if (ctx->pc != 0x12A1A4u) { return; }
    }
    ctx->pc = 0x12A1A4u;
    // 0x12a1a4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x12a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_12a1a8:
    // 0x12a1a8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x12a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x12a1ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a1b0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x12a1b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65520u)));
    // 0x12a1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12a1b8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x12a1b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x12a1bc: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x12a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12a1c0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x12a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x12a1c4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A1C4u;
    {
        const bool branch_taken_0x12a1c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1C4u;
            // 0x12a1c8: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1c4) {
            ctx->pc = 0x12A1E4u;
            goto label_12a1e4;
        }
    }
    ctx->pc = 0x12A1CCu;
    // 0x12a1cc: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x12a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x12a1d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12a1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1d4: 0xc04a6cc  jal         func_129B30
    ctx->pc = 0x12A1D4u;
    SET_GPR_U32(ctx, 31, 0x12A1DCu);
    ctx->pc = 0x12A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1D4u;
            // 0x12a1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B30u;
    if (runtime->hasFunction(0x129B30u)) {
        auto targetFn = runtime->lookupFunction(0x129B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1DCu; }
        if (ctx->pc != 0x12A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x129b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1DCu; }
        if (ctx->pc != 0x12A1DCu) { return; }
    }
    ctx->pc = 0x12A1DCu;
    // 0x12a1dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A1DCu;
    {
        const bool branch_taken_0x12a1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1dc) {
            ctx->pc = 0x12A1F4u;
            goto label_12a1f4;
        }
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x12a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x12a1e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12a1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1ec: 0xc04a768  jal         func_129DA0
    ctx->pc = 0x12A1ECu;
    SET_GPR_U32(ctx, 31, 0x12A1F4u);
    ctx->pc = 0x12A1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1ECu;
            // 0x12a1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA0u;
    if (runtime->hasFunction(0x129DA0u)) {
        auto targetFn = runtime->lookupFunction(0x129DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1F4u; }
        if (ctx->pc != 0x12A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x129da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1F4u; }
        if (ctx->pc != 0x12A1F4u) { return; }
    }
    ctx->pc = 0x12A1F4u;
label_12a1f4:
    // 0x12a1f4: 0xc04be04  jal         func_12F810
    ctx->pc = 0x12A1F4u;
    SET_GPR_U32(ctx, 31, 0x12A1FCu);
    ctx->pc = 0x12A1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1F4u;
            // 0x12a1f8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F810u;
    if (runtime->hasFunction(0x12F810u)) {
        auto targetFn = runtime->lookupFunction(0x12F810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1FCu; }
        if (ctx->pc != 0x12A1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x12f810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1FCu; }
        if (ctx->pc != 0x12A1FCu) { return; }
    }
    ctx->pc = 0x12A1FCu;
    // 0x12a1fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a200: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x12A200u;
    SET_GPR_U32(ctx, 31, 0x12A208u);
    ctx->pc = 0x12A204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A200u;
            // 0x12a204: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (runtime->hasFunction(0x12E990u)) {
        auto targetFn = runtime->lookupFunction(0x12E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A208u; }
        if (ctx->pc != 0x12A208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x12e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A208u; }
        if (ctx->pc != 0x12A208u) { return; }
    }
    ctx->pc = 0x12A208u;
    // 0x12a208: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12A208u;
    {
        const bool branch_taken_0x12a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A208u;
            // 0x12a20c: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a208) {
            ctx->pc = 0x12A28Cu;
            goto label_12a28c;
        }
    }
    ctx->pc = 0x12A210u;
label_12a210:
    // 0x12a210: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12A210u;
    SET_GPR_U32(ctx, 31, 0x12A218u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A218u; }
        if (ctx->pc != 0x12A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A218u; }
        if (ctx->pc != 0x12A218u) { return; }
    }
    ctx->pc = 0x12A218u;
    // 0x12a218: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a21c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12a220: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x12a220u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x12a224: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x12a224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x12a228: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x12a228u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 17)));
    // 0x12a22c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x12a22cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)46112u)));
    // 0x12a230: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12a230u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x12a234: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12a238: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x12a238u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46080u)));
    // 0x12a23c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x12a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x12a240: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a244: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12a244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12a248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A248u;
    {
        const bool branch_taken_0x12a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A248u;
            // 0x12a24c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a248) {
            ctx->pc = 0x12A258u;
            goto label_12a258;
        }
    }
    ctx->pc = 0x12A250u;
    // 0x12a250: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12A250u;
    SET_GPR_U32(ctx, 31, 0x12A258u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A258u; }
        if (ctx->pc != 0x12A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A258u; }
        if (ctx->pc != 0x12A258u) { return; }
    }
    ctx->pc = 0x12A258u;
label_12a258:
    // 0x12a258: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A258u;
    {
        const bool branch_taken_0x12a258 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A258u;
            // 0x12a25c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a258) {
            ctx->pc = 0x12A278u;
            goto label_12a278;
        }
    }
    ctx->pc = 0x12A260u;
    // 0x12a260: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x12a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x12a264: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12a264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a268: 0xc04a6cc  jal         func_129B30
    ctx->pc = 0x12A268u;
    SET_GPR_U32(ctx, 31, 0x12A270u);
    ctx->pc = 0x12A26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A268u;
            // 0x12a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B30u;
    if (runtime->hasFunction(0x129B30u)) {
        auto targetFn = runtime->lookupFunction(0x129B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A270u; }
        if (ctx->pc != 0x12A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x129b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A270u; }
        if (ctx->pc != 0x12A270u) { return; }
    }
    ctx->pc = 0x12A270u;
    // 0x12a270: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A270u;
    {
        const bool branch_taken_0x12a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A270u;
            // 0x12a274: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a270) {
            ctx->pc = 0x12A28Cu;
            goto label_12a28c;
        }
    }
    ctx->pc = 0x12A278u;
label_12a278:
    // 0x12a278: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x12a278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x12a27c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12a27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a280: 0xc04a768  jal         func_129DA0
    ctx->pc = 0x12A280u;
    SET_GPR_U32(ctx, 31, 0x12A288u);
    ctx->pc = 0x12A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A280u;
            // 0x12a284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA0u;
    if (runtime->hasFunction(0x129DA0u)) {
        auto targetFn = runtime->lookupFunction(0x129DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A288u; }
        if (ctx->pc != 0x12A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x129da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A288u; }
        if (ctx->pc != 0x12A288u) { return; }
    }
    ctx->pc = 0x12A288u;
    // 0x12a288: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x12a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_12a28c:
    // 0x12a28c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12a290: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12a290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12a294: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12A294u;
    SET_GPR_U32(ctx, 31, 0x12A29Cu);
    ctx->pc = 0x12A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A294u;
            // 0x12a298: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A29Cu; }
        if (ctx->pc != 0x12A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A29Cu; }
        if (ctx->pc != 0x12A29Cu) { return; }
    }
    ctx->pc = 0x12A29Cu;
    // 0x12a29c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a2a0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x12a2a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a2a4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x12a2a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a2a8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x12a2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a2ac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x12a2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a2b0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x12a2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a2b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x12a2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2B8u;
            // 0x12a2bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A0A0u: goto label_12a0a0;
            case 0x12A0B0u: goto label_12a0b0;
            case 0x12A0E8u: goto label_12a0e8;
            case 0x12A1A8u: goto label_12a1a8;
            case 0x12A1E4u: goto label_12a1e4;
            case 0x12A1F4u: goto label_12a1f4;
            case 0x12A210u: goto label_12a210;
            case 0x12A258u: goto label_12a258;
            case 0x12A278u: goto label_12a278;
            case 0x12A28Cu: goto label_12a28c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A2C0u;
}
