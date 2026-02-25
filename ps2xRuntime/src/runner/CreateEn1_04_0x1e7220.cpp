#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn1_04
// Address: 0x1e7220 - 0x1e7380
void CreateEn1_04_0x1e7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn1_04_0x1e7220");
#endif

    ctx->pc = 0x1e7220u;

    // 0x1e7220: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e7224: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e7224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e7228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e722c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e7230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7234: 0x246373b0  addiu       $v1, $v1, 0x73B0
    ctx->pc = 0x1e7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29616));
    // 0x1e7238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e723c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e723cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7244: 0x24427670  addiu       $v0, $v0, 0x7670
    ctx->pc = 0x1e7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30320));
    // 0x1e7248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e724c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e724cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7250: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e7250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e7254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e7254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7258: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e7258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e725c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1e725cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1e7260: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e7260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e7264: 0x24638800  addiu       $v1, $v1, -0x7800
    ctx->pc = 0x1e7264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936576));
    // 0x1e7268: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x1e726c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e726cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e7270: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1e7270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e7274: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e7274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e7278: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e7278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e727c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E727Cu;
    SET_GPR_U32(ctx, 31, 0x1E7284u);
    ctx->pc = 0x1E7280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E727Cu;
            // 0x1e7280: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7284u; }
        if (ctx->pc != 0x1E7284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7284u; }
        if (ctx->pc != 0x1E7284u) { return; }
    }
    ctx->pc = 0x1E7284u;
    // 0x1e7284: 0xc060544  jal         func_181510
    ctx->pc = 0x1E7284u;
    SET_GPR_U32(ctx, 31, 0x1E728Cu);
    ctx->pc = 0x1E7288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7284u;
            // 0x1e7288: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E728Cu; }
        if (ctx->pc != 0x1E728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E728Cu; }
        if (ctx->pc != 0x1E728Cu) { return; }
    }
    ctx->pc = 0x1E728Cu;
    // 0x1e728c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e728cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e7290: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e7290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e7294: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7298: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1e729c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e729cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e72a0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72a4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e72a4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e72a8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e72a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e72ac: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1e72b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e72b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e72b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e72b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e72b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e72b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e72bc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1e72bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e72c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e72c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e72c4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1e72c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1e72c8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e72c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e72cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e72d0: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E72D0u;
    {
        const bool branch_taken_0x1e72d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E72D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72D0u;
            // 0x1e72d4: 0xe4600124  swc1        $f0, 0x124($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72d0) {
            ctx->pc = 0x1E7348u;
            goto label_1e7348;
        }
    }
    ctx->pc = 0x1E72D8u;
    // 0x1e72d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e72dc: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E72DCu;
    {
        const bool branch_taken_0x1e72dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E72E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E72DCu;
            // 0x1e72e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72dc) {
            ctx->pc = 0x1E7330u;
            goto label_1e7330;
        }
    }
    ctx->pc = 0x1E72E4u;
    // 0x1e72e4: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E72E4u;
    {
        const bool branch_taken_0x1e72e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e72e4) {
            ctx->pc = 0x1E7318u;
            goto label_1e7318;
        }
    }
    ctx->pc = 0x1E72ECu;
    // 0x1e72ec: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E72ECu;
    {
        const bool branch_taken_0x1e72ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e72ec) {
            ctx->pc = 0x1E7300u;
            goto label_1e7300;
        }
    }
    ctx->pc = 0x1E72F4u;
    // 0x1e72f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E72F4u;
    {
        const bool branch_taken_0x1e72f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e72f4) {
            ctx->pc = 0x1E7350u;
            goto label_1e7350;
        }
    }
    ctx->pc = 0x1E72FCu;
    // 0x1e72fc: 0x0  nop
    ctx->pc = 0x1e72fcu;
    // NOP
label_1e7300:
    // 0x1e7300: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1e7304: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e7304u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e7308: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e7308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e730c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E730Cu;
    {
        const bool branch_taken_0x1e730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E730Cu;
            // 0x1e7310: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e730c) {
            ctx->pc = 0x1E7350u;
            goto label_1e7350;
        }
    }
    ctx->pc = 0x1E7314u;
    // 0x1e7314: 0x0  nop
    ctx->pc = 0x1e7314u;
    // NOP
label_1e7318:
    // 0x1e7318: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1e7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1e731c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e731cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e7320: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e7320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e7324: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E7324u;
    {
        const bool branch_taken_0x1e7324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7324u;
            // 0x1e7328: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7324) {
            ctx->pc = 0x1E7350u;
            goto label_1e7350;
        }
    }
    ctx->pc = 0x1E732Cu;
    // 0x1e732c: 0x0  nop
    ctx->pc = 0x1e732cu;
    // NOP
label_1e7330:
    // 0x1e7330: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1e7330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1e7334: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e7334u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e7338: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e7338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e733c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E733Cu;
    {
        const bool branch_taken_0x1e733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E733Cu;
            // 0x1e7340: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e733c) {
            ctx->pc = 0x1E7350u;
            goto label_1e7350;
        }
    }
    ctx->pc = 0x1E7344u;
    // 0x1e7344: 0x0  nop
    ctx->pc = 0x1e7344u;
    // NOP
label_1e7348:
    // 0x1e7348: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e7348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e734c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e734cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1e7350:
    // 0x1e7350: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e7350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e7354: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e7354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e7358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e735c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E735Cu;
    SET_GPR_U32(ctx, 31, 0x1E7364u);
    ctx->pc = 0x1E7360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E735Cu;
            // 0x1e7360: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7364u; }
        if (ctx->pc != 0x1E7364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7364u; }
        if (ctx->pc != 0x1E7364u) { return; }
    }
    ctx->pc = 0x1E7364u;
    // 0x1e7364: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e7364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e736c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e736cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7378u;
            // 0x1e737c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7300u: goto label_1e7300;
            case 0x1E7318u: goto label_1e7318;
            case 0x1E7330u: goto label_1e7330;
            case 0x1E7348u: goto label_1e7348;
            case 0x1E7350u: goto label_1e7350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7380u;
}
