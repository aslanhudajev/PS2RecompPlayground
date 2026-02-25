#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_03
// Address: 0x1e6100 - 0x1e6260
void CreateEn1_03_0x1e6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_03_0x1e6100");
#endif

    ctx->pc = 0x1e6100u;

    // 0x1e6100: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e6104: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e6108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e610c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e6110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6114: 0x24636290  addiu       $v1, $v1, 0x6290
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25232));
    // 0x1e6118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e611c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e611cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6124: 0x24426560  addiu       $v0, $v0, 0x6560
    ctx->pc = 0x1e6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25952));
    // 0x1e6128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e612c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e612cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6130: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e6130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e6134: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e6134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6138: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e6138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e613c: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e6140: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e6144: 0x24637210  addiu       $v1, $v1, 0x7210
    ctx->pc = 0x1e6144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29200));
    // 0x1e6148: 0x24426260  addiu       $v0, $v0, 0x6260
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25184));
    // 0x1e614c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e614cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e6150: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1e6150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1e6154: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e6154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e6158: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e6158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e615c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E615Cu;
    SET_GPR_U32(ctx, 31, 0x1E6164u);
    ctx->pc = 0x1E6160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E615Cu;
            // 0x1e6160: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6164u; }
        if (ctx->pc != 0x1E6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6164u; }
        if (ctx->pc != 0x1E6164u) { return; }
    }
    ctx->pc = 0x1E6164u;
    // 0x1e6164: 0xc060544  jal         func_181510
    ctx->pc = 0x1E6164u;
    SET_GPR_U32(ctx, 31, 0x1E616Cu);
    ctx->pc = 0x1E6168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6164u;
            // 0x1e6168: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E616Cu; }
        if (ctx->pc != 0x1E616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E616Cu; }
        if (ctx->pc != 0x1E616Cu) { return; }
    }
    ctx->pc = 0x1E616Cu;
    // 0x1e616c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e6170: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e6170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e6174: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e6178: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1e617c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e6180: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6184: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e6184u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6188: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e6188u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e618c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1e6190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e6190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6194: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e6194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e6198: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e619c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1e619cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e61a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e61a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e61a4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1e61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1e61a8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e61a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e61ac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e61b0: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E61B0u;
    {
        const bool branch_taken_0x1e61b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E61B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61B0u;
            // 0x1e61b4: 0xe4600124  swc1        $f0, 0x124($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61b0) {
            ctx->pc = 0x1E6228u;
            goto label_1e6228;
        }
    }
    ctx->pc = 0x1E61B8u;
    // 0x1e61b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e61bc: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E61BCu;
    {
        const bool branch_taken_0x1e61bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E61C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61BCu;
            // 0x1e61c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61bc) {
            ctx->pc = 0x1E6210u;
            goto label_1e6210;
        }
    }
    ctx->pc = 0x1E61C4u;
    // 0x1e61c4: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E61C4u;
    {
        const bool branch_taken_0x1e61c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e61c4) {
            ctx->pc = 0x1E61F8u;
            goto label_1e61f8;
        }
    }
    ctx->pc = 0x1E61CCu;
    // 0x1e61cc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E61CCu;
    {
        const bool branch_taken_0x1e61cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e61cc) {
            ctx->pc = 0x1E61E0u;
            goto label_1e61e0;
        }
    }
    ctx->pc = 0x1E61D4u;
    // 0x1e61d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E61D4u;
    {
        const bool branch_taken_0x1e61d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e61d4) {
            ctx->pc = 0x1E6230u;
            goto label_1e6230;
        }
    }
    ctx->pc = 0x1E61DCu;
    // 0x1e61dc: 0x0  nop
    ctx->pc = 0x1e61dcu;
    // NOP
label_1e61e0:
    // 0x1e61e0: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x1e61e4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e61e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e61e8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e61ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E61ECu;
    {
        const bool branch_taken_0x1e61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61ECu;
            // 0x1e61f0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61ec) {
            ctx->pc = 0x1E6230u;
            goto label_1e6230;
        }
    }
    ctx->pc = 0x1E61F4u;
    // 0x1e61f4: 0x0  nop
    ctx->pc = 0x1e61f4u;
    // NOP
label_1e61f8:
    // 0x1e61f8: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x1e61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x1e61fc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e61fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e6200: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e6200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e6204: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6204u;
    {
        const bool branch_taken_0x1e6204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6204u;
            // 0x1e6208: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6204) {
            ctx->pc = 0x1E6230u;
            goto label_1e6230;
        }
    }
    ctx->pc = 0x1E620Cu;
    // 0x1e620c: 0x0  nop
    ctx->pc = 0x1e620cu;
    // NOP
label_1e6210:
    // 0x1e6210: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x1e6210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x1e6214: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e6214u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e6218: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e6218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e621c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E621Cu;
    {
        const bool branch_taken_0x1e621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E621Cu;
            // 0x1e6220: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e621c) {
            ctx->pc = 0x1E6230u;
            goto label_1e6230;
        }
    }
    ctx->pc = 0x1E6224u;
    // 0x1e6224: 0x0  nop
    ctx->pc = 0x1e6224u;
    // NOP
label_1e6228:
    // 0x1e6228: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e6228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e622c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e622cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1e6230:
    // 0x1e6230: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e6230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e6234: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e6234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e6238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e623c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E623Cu;
    SET_GPR_U32(ctx, 31, 0x1E6244u);
    ctx->pc = 0x1E6240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E623Cu;
            // 0x1e6240: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6244u; }
        if (ctx->pc != 0x1E6244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6244u; }
        if (ctx->pc != 0x1E6244u) { return; }
    }
    ctx->pc = 0x1E6244u;
    // 0x1e6244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e624c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e624cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6258: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6258u;
            // 0x1e625c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E61E0u: goto label_1e61e0;
            case 0x1E61F8u: goto label_1e61f8;
            case 0x1E6210u: goto label_1e6210;
            case 0x1E6228u: goto label_1e6228;
            case 0x1E6230u: goto label_1e6230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6260u;
}
