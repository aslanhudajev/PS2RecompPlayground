#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BossAddingVector
// Address: 0x1cc080 - 0x1cc274
void BossAddingVector_0x1cc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1cc080");
#endif

    ctx->pc = 0x1cc080u;

    // 0x1cc080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc084: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1cc088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc090: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cc090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cc094: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cc094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cc098: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc09c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc0a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc0a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc0a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1CC0A4u;
    {
        const bool branch_taken_0x1cc0a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0A4u;
            // 0x1cc0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0a4) {
            ctx->pc = 0x1CC0E0u;
            goto label_1cc0e0;
        }
    }
    ctx->pc = 0x1CC0ACu;
    // 0x1cc0ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc0b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc0b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc0b4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cc0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc0b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC0B8u;
    SET_GPR_U32(ctx, 31, 0x1CC0C0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0C0u; }
        if (ctx->pc != 0x1CC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0C0u; }
        if (ctx->pc != 0x1CC0C0u) { return; }
    }
    ctx->pc = 0x1CC0C0u;
    // 0x1cc0c0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc0c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc0c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc0c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc0cc: 0x0  nop
    ctx->pc = 0x1cc0ccu;
    // NOP
    // 0x1cc0d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc0d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1CC0D4u;
    {
        const bool branch_taken_0x1cc0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0D4u;
            // 0x1cc0d8: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0d4) {
            ctx->pc = 0x1CC1A0u;
            goto label_1cc1a0;
        }
    }
    ctx->pc = 0x1CC0DCu;
    // 0x1cc0dc: 0x0  nop
    ctx->pc = 0x1cc0dcu;
    // NOP
label_1cc0e0:
    // 0x1cc0e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1cc0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc0e8: 0x0  nop
    ctx->pc = 0x1cc0e8u;
    // NOP
    // 0x1cc0ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc0f0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1CC0F0u;
    {
        const bool branch_taken_0x1cc0f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0F0u;
            // 0x1cc0f4: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0f0) {
            ctx->pc = 0x1CC128u;
            goto label_1cc128;
        }
    }
    ctx->pc = 0x1CC0F8u;
    // 0x1cc0f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc0f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc0fc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cc0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc100: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC100u;
    SET_GPR_U32(ctx, 31, 0x1CC108u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC108u; }
        if (ctx->pc != 0x1CC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC108u; }
        if (ctx->pc != 0x1CC108u) { return; }
    }
    ctx->pc = 0x1CC108u;
    // 0x1cc108: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc10c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc10cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc114: 0x0  nop
    ctx->pc = 0x1cc114u;
    // NOP
    // 0x1cc118: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc11c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc11cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc120: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CC120u;
    {
        const bool branch_taken_0x1cc120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC120u;
            // 0x1cc124: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc120) {
            ctx->pc = 0x1CC1A0u;
            goto label_1cc1a0;
        }
    }
    ctx->pc = 0x1CC128u;
label_1cc128:
    // 0x1cc128: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CC128u;
    SET_GPR_U32(ctx, 31, 0x1CC130u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC130u; }
        if (ctx->pc != 0x1CC130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC130u; }
        if (ctx->pc != 0x1CC130u) { return; }
    }
    ctx->pc = 0x1CC130u;
    // 0x1cc130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc130u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1cc134: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC134u;
    {
        const bool branch_taken_0x1cc134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc134) {
            ctx->pc = 0x1CC170u;
            goto label_1cc170;
        }
    }
    ctx->pc = 0x1CC13Cu;
    // 0x1cc13c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc140: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc140u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc144: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cc144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc148: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC148u;
    SET_GPR_U32(ctx, 31, 0x1CC150u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC150u; }
        if (ctx->pc != 0x1CC150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC150u; }
        if (ctx->pc != 0x1CC150u) { return; }
    }
    ctx->pc = 0x1CC150u;
    // 0x1cc150: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc154: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc15c: 0x0  nop
    ctx->pc = 0x1cc15cu;
    // NOP
    // 0x1cc160: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CC164u;
    {
        const bool branch_taken_0x1cc164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC164u;
            // 0x1cc168: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc164) {
            ctx->pc = 0x1CC1A0u;
            goto label_1cc1a0;
        }
    }
    ctx->pc = 0x1CC16Cu;
    // 0x1cc16c: 0x0  nop
    ctx->pc = 0x1cc16cu;
    // NOP
label_1cc170:
    // 0x1cc170: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc174: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc174u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc178: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1cc178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc17c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC17Cu;
    SET_GPR_U32(ctx, 31, 0x1CC184u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC184u; }
        if (ctx->pc != 0x1CC184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC184u; }
        if (ctx->pc != 0x1CC184u) { return; }
    }
    ctx->pc = 0x1CC184u;
    // 0x1cc184: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cc188: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc188u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc190: 0x0  nop
    ctx->pc = 0x1cc190u;
    // NOP
    // 0x1cc194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc198: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc198u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc19c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1cc19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1cc1a0:
    // 0x1cc1a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc1a4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1cc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1cc1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc1ac: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1cc1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc1b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc1b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc1b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CC1B4u;
    {
        const bool branch_taken_0x1cc1b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1b4) {
            ctx->pc = 0x1CC1E0u;
            goto label_1cc1e0;
        }
    }
    ctx->pc = 0x1CC1BCu;
    // 0x1cc1bc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC1BCu;
    SET_GPR_U32(ctx, 31, 0x1CC1C4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1C4u; }
        if (ctx->pc != 0x1CC1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1C4u; }
        if (ctx->pc != 0x1CC1C4u) { return; }
    }
    ctx->pc = 0x1CC1C4u;
    // 0x1cc1c4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1cc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1cc1c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1cc1c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc1cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cc1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc1d0: 0x0  nop
    ctx->pc = 0x1cc1d0u;
    // NOP
    // 0x1cc1d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc1d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CC1D8u;
    {
        const bool branch_taken_0x1cc1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1D8u;
            // 0x1cc1dc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1d8) {
            ctx->pc = 0x1CC260u;
            goto label_1cc260;
        }
    }
    ctx->pc = 0x1CC1E0u;
label_1cc1e0:
    // 0x1cc1e0: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1cc1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc1e8: 0x0  nop
    ctx->pc = 0x1cc1e8u;
    // NOP
    // 0x1cc1ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc1f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CC1F0u;
    {
        const bool branch_taken_0x1cc1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1f0) {
            ctx->pc = 0x1CC220u;
            goto label_1cc220;
        }
    }
    ctx->pc = 0x1CC1F8u;
    // 0x1cc1f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC1F8u;
    SET_GPR_U32(ctx, 31, 0x1CC200u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC200u; }
        if (ctx->pc != 0x1CC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC200u; }
        if (ctx->pc != 0x1CC200u) { return; }
    }
    ctx->pc = 0x1CC200u;
    // 0x1cc200: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1cc204: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1cc204u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc208: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cc208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc20c: 0x0  nop
    ctx->pc = 0x1cc20cu;
    // NOP
    // 0x1cc210: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc214: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc218: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC218u;
    {
        const bool branch_taken_0x1cc218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC218u;
            // 0x1cc21c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc218) {
            ctx->pc = 0x1CC260u;
            goto label_1cc260;
        }
    }
    ctx->pc = 0x1CC220u;
label_1cc220:
    // 0x1cc220: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CC220u;
    SET_GPR_U32(ctx, 31, 0x1CC228u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC228u; }
        if (ctx->pc != 0x1CC228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC228u; }
        if (ctx->pc != 0x1CC228u) { return; }
    }
    ctx->pc = 0x1CC228u;
    // 0x1cc228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc228u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1cc22c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC22Cu;
    {
        const bool branch_taken_0x1cc22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc22c) {
            ctx->pc = 0x1CC248u;
            goto label_1cc248;
        }
    }
    ctx->pc = 0x1CC234u;
    // 0x1cc234: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC234u;
    SET_GPR_U32(ctx, 31, 0x1CC23Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC23Cu; }
        if (ctx->pc != 0x1CC23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC23Cu; }
        if (ctx->pc != 0x1CC23Cu) { return; }
    }
    ctx->pc = 0x1CC23Cu;
    // 0x1cc23c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC240u;
    {
        const bool branch_taken_0x1cc240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC240u;
            // 0x1cc244: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc240) {
            ctx->pc = 0x1CC260u;
            goto label_1cc260;
        }
    }
    ctx->pc = 0x1CC248u;
label_1cc248:
    // 0x1cc248: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1CC248u;
    SET_GPR_U32(ctx, 31, 0x1CC250u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC250u; }
        if (ctx->pc != 0x1CC250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC250u; }
        if (ctx->pc != 0x1CC250u) { return; }
    }
    ctx->pc = 0x1CC250u;
    // 0x1cc250: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc254: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cc254u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cc258: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cc258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1cc25c: 0x0  nop
    ctx->pc = 0x1cc25cu;
    // NOP
label_1cc260:
    // 0x1cc260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc264: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cc264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc268: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cc268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc26c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC26Cu;
            // 0x1cc270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC0E0u: goto label_1cc0e0;
            case 0x1CC128u: goto label_1cc128;
            case 0x1CC170u: goto label_1cc170;
            case 0x1CC1A0u: goto label_1cc1a0;
            case 0x1CC1E0u: goto label_1cc1e0;
            case 0x1CC220u: goto label_1cc220;
            case 0x1CC248u: goto label_1cc248;
            case 0x1CC260u: goto label_1cc260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC274u;
}
