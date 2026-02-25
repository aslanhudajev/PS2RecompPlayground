#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_02
// Address: 0x1cc2e0 - 0x1cc458
void CreateEnex1_02_0x1cc2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_02_0x1cc2e0");
#endif

    ctx->pc = 0x1cc2e0u;

    // 0x1cc2e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1cc2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1cc2e4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cc2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cc2e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cc2ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cc2f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cc2f4: 0x2463c490  addiu       $v1, $v1, -0x3B70
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952080));
    // 0x1cc2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc2fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cc2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc304: 0x2442c790  addiu       $v0, $v0, -0x3870
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
    // 0x1cc308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc30c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc310: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1cc310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1cc314: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cc314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc318: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1cc318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1cc31c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cc320: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cc324: 0x2463da20  addiu       $v1, $v1, -0x25E0
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957600));
    // 0x1cc328: 0x2442c460  addiu       $v0, $v0, -0x3BA0
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952032));
    // 0x1cc32c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1cc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1cc330: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1cc334: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1cc334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1cc338: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1cc338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1cc33c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CC33Cu;
    SET_GPR_U32(ctx, 31, 0x1CC344u);
    ctx->pc = 0x1CC340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC33Cu;
            // 0x1cc340: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC344u; }
        if (ctx->pc != 0x1CC344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC344u; }
        if (ctx->pc != 0x1CC344u) { return; }
    }
    ctx->pc = 0x1CC344u;
    // 0x1cc344: 0xc060544  jal         func_181510
    ctx->pc = 0x1CC344u;
    SET_GPR_U32(ctx, 31, 0x1CC34Cu);
    ctx->pc = 0x1CC348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC344u;
            // 0x1cc348: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC34Cu; }
        if (ctx->pc != 0x1CC34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC34Cu; }
        if (ctx->pc != 0x1CC34Cu) { return; }
    }
    ctx->pc = 0x1CC34Cu;
    // 0x1cc34c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1cc34cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc350: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1cc350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1cc354: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1cc354u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc358: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1cc358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc35c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cc35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cc360: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1cc364: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1cc368: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1cc36c: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x1cc36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1cc370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc374: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1cc374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc378: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1cc378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1cc37c: 0xc4203520  lwc1        $f0, 0x3520($at)
    ctx->pc = 0x1cc37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc380: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x1cc380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x1cc384: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cc384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc388: 0x0  nop
    ctx->pc = 0x1cc388u;
    // NOP
    // 0x1cc38c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cc390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cc390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cc394: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cc394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cc398: 0x12620021  beq         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CC398u;
    {
        const bool branch_taken_0x1cc398 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC398u;
            // 0x1cc39c: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc398) {
            ctx->pc = 0x1CC420u;
            goto label_1cc420;
        }
    }
    ctx->pc = 0x1CC3A0u;
    // 0x1cc3a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc3a4: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC3A4u;
    {
        const bool branch_taken_0x1cc3a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3A4u;
            // 0x1cc3a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3a4) {
            ctx->pc = 0x1CC400u;
            goto label_1cc400;
        }
    }
    ctx->pc = 0x1CC3ACu;
    // 0x1cc3ac: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC3ACu;
    {
        const bool branch_taken_0x1cc3ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cc3ac) {
            ctx->pc = 0x1CC3E0u;
            goto label_1cc3e0;
        }
    }
    ctx->pc = 0x1CC3B4u;
    // 0x1cc3b4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC3C8u;
            goto label_1cc3c8;
        }
    }
    ctx->pc = 0x1CC3BCu;
    // 0x1cc3bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CC3BCu;
    {
        const bool branch_taken_0x1cc3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3bc) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC3C4u;
    // 0x1cc3c4: 0x0  nop
    ctx->pc = 0x1cc3c4u;
    // NOP
label_1cc3c8:
    // 0x1cc3c8: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1cc3cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cc3ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1cc3d0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1cc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1cc3d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC3D4u;
    {
        const bool branch_taken_0x1cc3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3D4u;
            // 0x1cc3d8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3d4) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC3DCu;
    // 0x1cc3dc: 0x0  nop
    ctx->pc = 0x1cc3dcu;
    // NOP
label_1cc3e0:
    // 0x1cc3e0: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1cc3e4: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1cc3e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1cc3e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cc3ec: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cc3f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cc3f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc3f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC3F4u;
    {
        const bool branch_taken_0x1cc3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3F4u;
            // 0x1cc3f8: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3f4) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC3FCu;
    // 0x1cc3fc: 0x0  nop
    ctx->pc = 0x1cc3fcu;
    // NOP
label_1cc400:
    // 0x1cc400: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1cc404: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cc404u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cc408: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x1cc408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x1cc40c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cc410: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1cc410u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cc414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC414u;
    {
        const bool branch_taken_0x1cc414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC414u;
            // 0x1cc418: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc414) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC41Cu;
    // 0x1cc41c: 0x0  nop
    ctx->pc = 0x1cc41cu;
    // NOP
label_1cc420:
    // 0x1cc420: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1cc420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1cc424: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1cc424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1cc428:
    // 0x1cc428: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cc428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cc42c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cc430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc434: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1CC434u;
    SET_GPR_U32(ctx, 31, 0x1CC43Cu);
    ctx->pc = 0x1CC438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC434u;
            // 0x1cc438: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC43Cu; }
        if (ctx->pc != 0x1CC43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC43Cu; }
        if (ctx->pc != 0x1CC43Cu) { return; }
    }
    ctx->pc = 0x1CC43Cu;
    // 0x1cc43c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc440: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc450: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC450u;
            // 0x1cc454: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC3C8u: goto label_1cc3c8;
            case 0x1CC3E0u: goto label_1cc3e0;
            case 0x1CC400u: goto label_1cc400;
            case 0x1CC420u: goto label_1cc420;
            case 0x1CC428u: goto label_1cc428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC458u;
}
