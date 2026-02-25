#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_03
// Address: 0x1ab660 - 0x1ab774
void CreateEn6_03_0x1ab660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_03_0x1ab660");
#endif

    ctx->pc = 0x1ab660u;

    // 0x1ab660: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1ab664: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ab664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ab668: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ab668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ab66c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ab66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ab670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab674: 0x2463b7b0  addiu       $v1, $v1, -0x4850
    ctx->pc = 0x1ab674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948784));
    // 0x1ab678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab67c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ab67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab684: 0x2442bab0  addiu       $v0, $v0, -0x4550
    ctx->pc = 0x1ab684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949552));
    // 0x1ab688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab68c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ab68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab690: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1ab690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1ab694: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ab694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab698: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1ab69c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1ab69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1ab6a0: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1ab6a4: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x1ab6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x1ab6a8: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x1ab6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
    // 0x1ab6ac: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1ab6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1ab6b0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1ab6b4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1ab6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1ab6b8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1ab6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1ab6bc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AB6BCu;
    SET_GPR_U32(ctx, 31, 0x1AB6C4u);
    ctx->pc = 0x1AB6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6BCu;
            // 0x1ab6c0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6C4u; }
        if (ctx->pc != 0x1AB6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6C4u; }
        if (ctx->pc != 0x1AB6C4u) { return; }
    }
    ctx->pc = 0x1AB6C4u;
    // 0x1ab6c4: 0xc060544  jal         func_181510
    ctx->pc = 0x1AB6C4u;
    SET_GPR_U32(ctx, 31, 0x1AB6CCu);
    ctx->pc = 0x1AB6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6C4u;
            // 0x1ab6c8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6CCu; }
        if (ctx->pc != 0x1AB6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6CCu; }
        if (ctx->pc != 0x1AB6CCu) { return; }
    }
    ctx->pc = 0x1AB6CCu;
    // 0x1ab6cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ab6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ab6d0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1ab6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1ab6d4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1ab6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ab6d8: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x1ab6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x1ab6dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ab6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ab6e0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ab6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab6e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ab6e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab6e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ab6e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab6f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ab6f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ab6f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ab6f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab6f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ab6fc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1ab6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ab700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab704: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1ab704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1ab708: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ab708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1ab70c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ab70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab710: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ab710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ab714: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB714u;
    {
        const bool branch_taken_0x1ab714 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB714u;
            // 0x1ab718: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab714) {
            ctx->pc = 0x1AB730u;
            goto label_1ab730;
        }
    }
    ctx->pc = 0x1AB71Cu;
    // 0x1ab71c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB71Cu;
    {
        const bool branch_taken_0x1ab71c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab71c) {
            ctx->pc = 0x1AB730u;
            goto label_1ab730;
        }
    }
    ctx->pc = 0x1AB724u;
    // 0x1ab724: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AB724u;
    {
        const bool branch_taken_0x1ab724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab724) {
            ctx->pc = 0x1AB750u;
            goto label_1ab750;
        }
    }
    ctx->pc = 0x1AB72Cu;
    // 0x1ab72c: 0x0  nop
    ctx->pc = 0x1ab72cu;
    // NOP
label_1ab730:
    // 0x1ab730: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1ab734: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1ab734u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1ab738: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1ab738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1ab73c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1ab73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1ab740: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1ab740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1ab744: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ab744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1ab748: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1ab748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1ab74c: 0x0  nop
    ctx->pc = 0x1ab74cu;
    // NOP
label_1ab750:
    // 0x1ab750: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AB750u;
    SET_GPR_U32(ctx, 31, 0x1AB758u);
    ctx->pc = 0x1AB754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB750u;
            // 0x1ab754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB758u; }
        if (ctx->pc != 0x1AB758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB758u; }
        if (ctx->pc != 0x1AB758u) { return; }
    }
    ctx->pc = 0x1AB758u;
    // 0x1ab758: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab75c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab76c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB76Cu;
            // 0x1ab770: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB730u: goto label_1ab730;
            case 0x1AB750u: goto label_1ab750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB774u;
}
