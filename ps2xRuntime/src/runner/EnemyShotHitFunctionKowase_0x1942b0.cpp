#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotHitFunctionKowase
// Address: 0x1942b0 - 0x1943e8
void EnemyShotHitFunctionKowase_0x1942b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotHitFunctionKowase_0x1942b0");
#endif

    ctx->pc = 0x1942b0u;

    // 0x1942b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1942b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1942b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1942b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1942b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1942bc: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1942bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1942c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1942c4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1942c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1942c8: 0x18c00043  blez        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x1942C8u;
    {
        const bool branch_taken_0x1942c8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1942CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1942C8u;
            // 0x1942cc: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942c8) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x1942D0u;
    // 0x1942d0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1942d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1942d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1942d8: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1942D8u;
    {
        const bool branch_taken_0x1942d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1942d8) {
            ctx->pc = 0x1942E8u;
            goto label_1942e8;
        }
    }
    ctx->pc = 0x1942E0u;
    // 0x1942e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1942E0u;
    {
        const bool branch_taken_0x1942e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942e0) {
            ctx->pc = 0x194380u;
            goto label_194380;
        }
    }
    ctx->pc = 0x1942E8u;
label_1942e8:
    // 0x1942e8: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x1942e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1942ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1942ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1942f0: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x1942f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x1942f4: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x1942f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1942f8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1942f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1942fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1942fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x194300: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x194300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x194304: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x194308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x194308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19430c: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x19430cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x194310: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x194310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x194314: 0x1c800030  bgtz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x194314u;
    {
        const bool branch_taken_0x194314 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x194314) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x19431Cu;
    // 0x19431c: 0x8ce6003c  lw          $a2, 0x3C($a3)
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x194320: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x194320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x194324: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x194324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x194328: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19432c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x19432cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x194330: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194334: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x194334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x194338: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x194338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19433c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x19433cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x194340: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x194344: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x194344u;
    SET_GPR_U32(ctx, 31, 0x19434Cu);
    ctx->pc = 0x194348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194344u;
            // 0x194348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19434Cu; }
        if (ctx->pc != 0x19434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19434Cu; }
        if (ctx->pc != 0x19434Cu) { return; }
    }
    ctx->pc = 0x19434Cu;
    // 0x19434c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x19434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194354: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x194354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194358: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19435c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19435cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x194360: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194364: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x194364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x194368: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x194368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19436c: 0xc065944  jal         func_196510
    ctx->pc = 0x19436Cu;
    SET_GPR_U32(ctx, 31, 0x194374u);
    ctx->pc = 0x194370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19436Cu;
            // 0x194370: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194374u; }
        if (ctx->pc != 0x194374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194374u; }
        if (ctx->pc != 0x194374u) { return; }
    }
    ctx->pc = 0x194374u;
    // 0x194374: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x194374u;
    {
        const bool branch_taken_0x194374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194374) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x19437Cu;
    // 0x19437c: 0x0  nop
    ctx->pc = 0x19437cu;
    // NOP
label_194380:
    // 0x194380: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x194380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x194384: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x194384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x194388: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x194388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x19438c: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x194390: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x194390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x194394: 0xace40030  sw          $a0, 0x30($a3)
    ctx->pc = 0x194394u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 4));
    // 0x194398: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19439c: 0x1c80000e  bgtz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x19439Cu;
    {
        const bool branch_taken_0x19439c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x19439c) {
            ctx->pc = 0x1943D8u;
            goto label_1943d8;
        }
    }
    ctx->pc = 0x1943A4u;
    // 0x1943a4: 0x8ce6003c  lw          $a2, 0x3C($a3)
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1943a8: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1943ac: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1943b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1943b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1943b4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1943b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1943b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1943bc: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x1943bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x1943c0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1943c4: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1943c8: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1943c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1943cc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1943CCu;
    SET_GPR_U32(ctx, 31, 0x1943D4u);
    ctx->pc = 0x1943D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1943CCu;
            // 0x1943d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943D4u; }
        if (ctx->pc != 0x1943D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943D4u; }
        if (ctx->pc != 0x1943D4u) { return; }
    }
    ctx->pc = 0x1943D4u;
    // 0x1943d4: 0x0  nop
    ctx->pc = 0x1943d4u;
    // NOP
label_1943d8:
    // 0x1943d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1943d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1943dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1943dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1943e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1943E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1943E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1943E0u;
            // 0x1943e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1942E8u: goto label_1942e8;
            case 0x194380u: goto label_194380;
            case 0x1943D8u: goto label_1943d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1943E8u;
}
