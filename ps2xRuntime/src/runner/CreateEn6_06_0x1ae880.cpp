#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_06
// Address: 0x1ae880 - 0x1aea54
void CreateEn6_06_0x1ae880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_06_0x1ae880");
#endif

    ctx->pc = 0x1ae880u;

    // 0x1ae880: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1ae880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1ae884: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ae884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ae888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ae88c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ae894: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x1ae898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae89c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ae89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae8a4: 0x2442eca0  addiu       $v0, $v0, -0x1360
    ctx->pc = 0x1ae8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x1ae8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae8ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8b0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1ae8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1ae8b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8b8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1ae8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1ae8bc: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ae8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ae8c0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ae8c4: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x1ae8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x1ae8c8: 0x2442ea60  addiu       $v0, $v0, -0x15A0
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x1ae8cc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1ae8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1ae8d0: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1ae8d4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1ae8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1ae8d8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1ae8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1ae8dc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AE8DCu;
    SET_GPR_U32(ctx, 31, 0x1AE8E4u);
    ctx->pc = 0x1AE8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE8DCu;
            // 0x1ae8e0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8E4u; }
        if (ctx->pc != 0x1AE8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8E4u; }
        if (ctx->pc != 0x1AE8E4u) { return; }
    }
    ctx->pc = 0x1AE8E4u;
    // 0x1ae8e4: 0xc060544  jal         func_181510
    ctx->pc = 0x1AE8E4u;
    SET_GPR_U32(ctx, 31, 0x1AE8ECu);
    ctx->pc = 0x1AE8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE8E4u;
            // 0x1ae8e8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ECu; }
        if (ctx->pc != 0x1AE8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE8ECu; }
        if (ctx->pc != 0x1AE8ECu) { return; }
    }
    ctx->pc = 0x1AE8ECu;
    // 0x1ae8ec: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ae8ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae8f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1ae8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1ae8f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ae8f8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ae8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae8fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ae8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ae900: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ae900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ae904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae908: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ae908u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae90c: 0x0  nop
    ctx->pc = 0x1ae90cu;
    // NOP
    // 0x1ae910: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ae910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1ae914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae918: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ae918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae91c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ae91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ae920: 0x12620023  beq         $s3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AE920u;
    {
        const bool branch_taken_0x1ae920 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE920u;
            // 0x1ae924: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae920) {
            ctx->pc = 0x1AE9B0u;
            goto label_1ae9b0;
        }
    }
    ctx->pc = 0x1AE928u;
    // 0x1ae928: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE928u;
    {
        const bool branch_taken_0x1ae928 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae928) {
            ctx->pc = 0x1AE938u;
            goto label_1ae938;
        }
    }
    ctx->pc = 0x1AE930u;
    // 0x1ae930: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1AE930u;
    {
        const bool branch_taken_0x1ae930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae930) {
            ctx->pc = 0x1AEA28u;
            goto label_1aea28;
        }
    }
    ctx->pc = 0x1AE938u;
label_1ae938:
    // 0x1ae938: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE938u;
    SET_GPR_U32(ctx, 31, 0x1AE940u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE940u; }
        if (ctx->pc != 0x1AE940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE940u; }
        if (ctx->pc != 0x1AE940u) { return; }
    }
    ctx->pc = 0x1AE940u;
    // 0x1ae940: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ae940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae948: 0x0  nop
    ctx->pc = 0x1ae948u;
    // NOP
    // 0x1ae94c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae950: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE950u;
    SET_GPR_U32(ctx, 31, 0x1AE958u);
    ctx->pc = 0x1AE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE950u;
            // 0x1ae954: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE958u; }
        if (ctx->pc != 0x1AE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE958u; }
        if (ctx->pc != 0x1AE958u) { return; }
    }
    ctx->pc = 0x1AE958u;
    // 0x1ae958: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ae958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae95c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae960: 0x0  nop
    ctx->pc = 0x1ae960u;
    // NOP
    // 0x1ae964: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae968: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE968u;
    SET_GPR_U32(ctx, 31, 0x1AE970u);
    ctx->pc = 0x1AE96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE968u;
            // 0x1ae96c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE970u; }
        if (ctx->pc != 0x1AE970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE970u; }
        if (ctx->pc != 0x1AE970u) { return; }
    }
    ctx->pc = 0x1AE970u;
    // 0x1ae970: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ae970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ae974: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae974u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae978: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae97c: 0x0  nop
    ctx->pc = 0x1ae97cu;
    // NOP
    // 0x1ae980: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae984: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE984u;
    SET_GPR_U32(ctx, 31, 0x1AE98Cu);
    ctx->pc = 0x1AE988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE984u;
            // 0x1ae988: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE98Cu; }
        if (ctx->pc != 0x1AE98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE98Cu; }
        if (ctx->pc != 0x1AE98Cu) { return; }
    }
    ctx->pc = 0x1AE98Cu;
    // 0x1ae98c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ae990: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae990u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae998: 0x0  nop
    ctx->pc = 0x1ae998u;
    // NOP
    // 0x1ae99c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae9a0: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1ae9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1ae9a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1AE9A4u;
    {
        const bool branch_taken_0x1ae9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9A4u;
            // 0x1ae9a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9a4) {
            ctx->pc = 0x1AEA28u;
            goto label_1aea28;
        }
    }
    ctx->pc = 0x1AE9ACu;
    // 0x1ae9ac: 0x0  nop
    ctx->pc = 0x1ae9acu;
    // NOP
label_1ae9b0:
    // 0x1ae9b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE9B0u;
    SET_GPR_U32(ctx, 31, 0x1AE9B8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B8u; }
        if (ctx->pc != 0x1AE9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9B8u; }
        if (ctx->pc != 0x1AE9B8u) { return; }
    }
    ctx->pc = 0x1AE9B8u;
    // 0x1ae9b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ae9bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae9c0: 0x0  nop
    ctx->pc = 0x1ae9c0u;
    // NOP
    // 0x1ae9c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae9c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE9C8u;
    SET_GPR_U32(ctx, 31, 0x1AE9D0u);
    ctx->pc = 0x1AE9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9C8u;
            // 0x1ae9cc: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9D0u; }
        if (ctx->pc != 0x1AE9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9D0u; }
        if (ctx->pc != 0x1AE9D0u) { return; }
    }
    ctx->pc = 0x1AE9D0u;
    // 0x1ae9d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ae9d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae9d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae9d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae9dc: 0x0  nop
    ctx->pc = 0x1ae9dcu;
    // NOP
    // 0x1ae9e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ae9e4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AE9E4u;
    SET_GPR_U32(ctx, 31, 0x1AE9ECu);
    ctx->pc = 0x1AE9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE9E4u;
            // 0x1ae9e8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9ECu; }
        if (ctx->pc != 0x1AE9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9ECu; }
        if (ctx->pc != 0x1AE9ECu) { return; }
    }
    ctx->pc = 0x1AE9ECu;
    // 0x1ae9ec: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ae9f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ae9f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ae9f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae9f8: 0x0  nop
    ctx->pc = 0x1ae9f8u;
    // NOP
    // 0x1ae9fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aea00: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1AEA00u;
    SET_GPR_U32(ctx, 31, 0x1AEA08u);
    ctx->pc = 0x1AEA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA00u;
            // 0x1aea04: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA08u; }
        if (ctx->pc != 0x1AEA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA08u; }
        if (ctx->pc != 0x1AEA08u) { return; }
    }
    ctx->pc = 0x1AEA08u;
    // 0x1aea08: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1aea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1aea0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1aea0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1aea10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aea10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aea14: 0x0  nop
    ctx->pc = 0x1aea14u;
    // NOP
    // 0x1aea18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aea18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aea1c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1aea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1aea20: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1aea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1aea24: 0x0  nop
    ctx->pc = 0x1aea24u;
    // NOP
label_1aea28:
    // 0x1aea28: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AEA28u;
    SET_GPR_U32(ctx, 31, 0x1AEA30u);
    ctx->pc = 0x1AEA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA28u;
            // 0x1aea2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA30u; }
        if (ctx->pc != 0x1AEA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA30u; }
        if (ctx->pc != 0x1AEA30u) { return; }
    }
    ctx->pc = 0x1AEA30u;
    // 0x1aea30: 0xc06bb28  jal         func_1AECA0
    ctx->pc = 0x1AEA30u;
    SET_GPR_U32(ctx, 31, 0x1AEA38u);
    ctx->pc = 0x1AEA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA30u;
            // 0x1aea34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AECA0u;
    if (runtime->hasFunction(0x1AECA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA38u; }
        if (ctx->pc != 0x1AEA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En6_06Move_0x1aeca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA38u; }
        if (ctx->pc != 0x1AEA38u) { return; }
    }
    ctx->pc = 0x1AEA38u;
    // 0x1aea38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aea3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aea3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aea40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aea40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aea44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aea44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aea48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aea48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aea4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEA4Cu;
            // 0x1aea50: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE938u: goto label_1ae938;
            case 0x1AE9B0u: goto label_1ae9b0;
            case 0x1AEA28u: goto label_1aea28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEA54u;
}
