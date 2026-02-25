#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_01
// Address: 0x1b3cb0 - 0x1b3eac
void CreateEn5_01_0x1b3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_01_0x1b3cb0");
#endif

    ctx->pc = 0x1b3cb0u;

    // 0x1b3cb0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b3cb4: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b3cb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b3cbc: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b3cc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3cc4: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x1b3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
    // 0x1b3cc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3ccc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b3cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3cd4: 0x24424160  addiu       $v0, $v0, 0x4160
    ctx->pc = 0x1b3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16736));
    // 0x1b3cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3cdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b3cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ce0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1b3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1b3ce4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b3ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ce8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1b3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1b3cec: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b3cf0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b3cf4: 0x24634ac0  addiu       $v1, $v1, 0x4AC0
    ctx->pc = 0x1b3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19136));
    // 0x1b3cf8: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x1b3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x1b3cfc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1b3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1b3d00: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1b3d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1b3d04: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b3d08: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1b3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1b3d0c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B3D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B3D14u);
    ctx->pc = 0x1B3D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D0Cu;
            // 0x1b3d10: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D14u; }
        if (ctx->pc != 0x1B3D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D14u; }
        if (ctx->pc != 0x1B3D14u) { return; }
    }
    ctx->pc = 0x1B3D14u;
    // 0x1b3d14: 0xc060544  jal         func_181510
    ctx->pc = 0x1B3D14u;
    SET_GPR_U32(ctx, 31, 0x1B3D1Cu);
    ctx->pc = 0x1B3D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D14u;
            // 0x1b3d18: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D1Cu; }
        if (ctx->pc != 0x1B3D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3D1Cu; }
        if (ctx->pc != 0x1B3D1Cu) { return; }
    }
    ctx->pc = 0x1B3D1Cu;
    // 0x1b3d1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b3d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b3d20: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1b3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1b3d24: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3d28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3d2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b3d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3d30: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3d34: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b3d34u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3d38: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b3d38u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3d40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3d44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b3d44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b3d48: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3d48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b3d4c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1b3d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b3d50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d54: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b3d58: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b3d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1b3d5c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3d60: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b3d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b3d64: 0x12620036  beq         $s3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B3D64u;
    {
        const bool branch_taken_0x1b3d64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D64u;
            // 0x1b3d68: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d64) {
            ctx->pc = 0x1B3E40u;
            goto label_1b3e40;
        }
    }
    ctx->pc = 0x1B3D6Cu;
    // 0x1b3d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3d70: 0x12620021  beq         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3D70u;
    {
        const bool branch_taken_0x1b3d70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3D70u;
            // 0x1b3d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d70) {
            ctx->pc = 0x1B3DF8u;
            goto label_1b3df8;
        }
    }
    ctx->pc = 0x1B3D78u;
    // 0x1b3d78: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B3D78u;
    {
        const bool branch_taken_0x1b3d78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d78) {
            ctx->pc = 0x1B3DC8u;
            goto label_1b3dc8;
        }
    }
    ctx->pc = 0x1B3D80u;
    // 0x1b3d80: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D80u;
    {
        const bool branch_taken_0x1b3d80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d80) {
            ctx->pc = 0x1B3D90u;
            goto label_1b3d90;
        }
    }
    ctx->pc = 0x1B3D88u;
    // 0x1b3d88: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B3D88u;
    {
        const bool branch_taken_0x1b3d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d88) {
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3D90u;
label_1b3d90:
    // 0x1b3d90: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1b3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1b3d94: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b3d94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b3d98: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1b3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1b3d9c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1b3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1b3da0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1b3da0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1b3da4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b3da8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1b3dac: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b3dacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1b3db0: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1b3db4: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1b3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1b3db8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b3db8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1b3dbc: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1b3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1b3dc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B3DC0u;
    {
        const bool branch_taken_0x1b3dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DC0u;
            // 0x1b3dc4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dc0) {
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3DC8u;
label_1b3dc8:
    // 0x1b3dc8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1b3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1b3dcc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b3dccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b3dd0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1b3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1b3dd4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1b3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1b3dd8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1b3dd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1b3ddc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b3de0: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1b3de4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b3de4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1b3de8: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1b3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1b3dec: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1b3decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1b3df0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B3DF0u;
    {
        const bool branch_taken_0x1b3df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DF0u;
            // 0x1b3df4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3df0) {
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3DF8u;
label_1b3df8:
    // 0x1b3df8: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1b3dfc: 0xe60300d0  swc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b3dfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1b3e00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b3e00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b3e04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3e08: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b3e0c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1b3e0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b3e10: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b3e14: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1b3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1b3e18: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b3e1c: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1b3e1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1b3e20: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b3e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b3e24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e28: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1b3e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1b3e2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e30: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x1b3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x1b3e34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B3E38u;
    {
        const bool branch_taken_0x1b3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E38u;
            // 0x1b3e3c: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e38) {
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3E40u;
label_1b3e40:
    // 0x1b3e40: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1b3e44: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b3e48: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1b3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1b3e4c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b3e4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b3e50: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3e54: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b3e58: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1b3e58u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b3e5c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b3e60: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1b3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1b3e64: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b3e68: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1b3e68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1b3e6c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b3e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e74: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1b3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1b3e78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e7c: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x1b3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x1b3e80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3e84: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1b3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_1b3e88:
    // 0x1b3e88: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B3E88u;
    SET_GPR_U32(ctx, 31, 0x1B3E90u);
    ctx->pc = 0x1B3E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E88u;
            // 0x1b3e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E90u; }
        if (ctx->pc != 0x1B3E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E90u; }
        if (ctx->pc != 0x1B3E90u) { return; }
    }
    ctx->pc = 0x1B3E90u;
    // 0x1b3e90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3e94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EA4u;
            // 0x1b3ea8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3D90u: goto label_1b3d90;
            case 0x1B3DC8u: goto label_1b3dc8;
            case 0x1B3DF8u: goto label_1b3df8;
            case 0x1B3E40u: goto label_1b3e40;
            case 0x1B3E88u: goto label_1b3e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3EACu;
}
