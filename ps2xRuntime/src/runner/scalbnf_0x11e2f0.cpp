#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: scalbnf
// Address: 0x11e2f0 - 0x11e450
void scalbnf_0x11e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scalbnf_0x11e2f0");
#endif

    ctx->pc = 0x11e2f0u;

    // 0x11e2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e2f4: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x11e2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e2fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11e2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e300: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x11e304: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x11e304u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x11e308: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x11e308u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x11e30c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11E30Cu;
    {
        const bool branch_taken_0x11e30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E30Cu;
            // 0x11e310: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e30c) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E314u;
    // 0x11e314: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e318: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e318u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e31c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e31cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11e320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E320u;
    {
        const bool branch_taken_0x11e320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E320u;
            // 0x11e324: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e320) {
            ctx->pc = 0x11E338u;
            goto label_11e338;
        }
    }
    ctx->pc = 0x11E328u;
    // 0x11e328: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e328u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e32c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11E32Cu;
    {
        const bool branch_taken_0x11e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E32Cu;
            // 0x11e330: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e32c) {
            ctx->pc = 0x11E448u;
            goto label_11e448;
        }
    }
    ctx->pc = 0x11E334u;
    // 0x11e334: 0x0  nop
    ctx->pc = 0x11e334u;
    // NOP
label_11e338:
    // 0x11e338: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x11e33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e340: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x11e340u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e344: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11e344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11e348: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e34c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11e34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e350: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x11e350u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x11e354: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11e354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11e358: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x11e358u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11e35c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x11e35cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15536u)));
    // 0x11e360: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11e360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11e364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E364u;
    {
        const bool branch_taken_0x11e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E364u;
            // 0x11e368: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e364) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E36Cu;
    // 0x11e36c: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11e370: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x11e370u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)16992u)));
    // 0x11e374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e378: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11E378u;
    {
        const bool branch_taken_0x11e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E378u;
            // 0x11e37c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e378) {
            ctx->pc = 0x11E440u;
            goto label_11e440;
        }
    }
    ctx->pc = 0x11E380u;
label_11e380:
    // 0x11e380: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11e380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11e384: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E384u;
    {
        const bool branch_taken_0x11e384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E384u;
            // 0x11e388: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e384) {
            ctx->pc = 0x11E398u;
            goto label_11e398;
        }
    }
    ctx->pc = 0x11E38Cu;
    // 0x11e38c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x11e38cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e390: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11E390u;
    {
        const bool branch_taken_0x11e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E390u;
            // 0x11e394: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e390) {
            ctx->pc = 0x11E440u;
            goto label_11e440;
        }
    }
    ctx->pc = 0x11E398u;
label_11e398:
    // 0x11e398: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x11e398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x11e39c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E39Cu;
    {
        const bool branch_taken_0x11e39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e39c) {
            ctx->pc = 0x11E3F4u;
            goto label_11e3f4;
        }
    }
    ctx->pc = 0x11E3A4u;
    // 0x11e3a4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E3A4u;
    {
        const bool branch_taken_0x11e3a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3A4u;
            // 0x11e3a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3a4) {
            ctx->pc = 0x11E3D0u;
            goto label_11e3d0;
        }
    }
    ctx->pc = 0x11E3ACu;
    // 0x11e3ac: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x11e3b0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x11e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x11e3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e3b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e3b8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e3b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11e3bc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11e3bcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11e3c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e3c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e3c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E3C4u;
    {
        const bool branch_taken_0x11e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3C4u;
            // 0x11e3c8: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3c4) {
            ctx->pc = 0x11E448u;
            goto label_11e448;
        }
    }
    ctx->pc = 0x11E3CCu;
    // 0x11e3cc: 0x0  nop
    ctx->pc = 0x11e3ccu;
    // NOP
label_11e3d0:
    // 0x11e3d0: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x11e3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x11e3d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E3D4u;
    {
        const bool branch_taken_0x11e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3D4u;
            // 0x11e3d8: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)50000u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3d4) {
            ctx->pc = 0x11E414u;
            goto label_11e414;
        }
    }
    ctx->pc = 0x11E3DCu;
    // 0x11e3dc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e3e0: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11e3e4: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x11e3e4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)16992u)));
    // 0x11e3e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e3ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E3ECu;
    {
        const bool branch_taken_0x11e3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3ec) {
            ctx->pc = 0x11E400u;
            goto label_11e400;
        }
    }
    ctx->pc = 0x11E3F4u;
label_11e3f4:
    // 0x11e3f4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e3f8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e3f8u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x11e3fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11e400:
    // 0x11e400: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x11e400u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11e404: 0xc047914  jal         func_11E450
    ctx->pc = 0x11E404u;
    SET_GPR_U32(ctx, 31, 0x11E40Cu);
    ctx->pc = 0x11E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E404u;
            // 0x11e408: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E450u;
    if (runtime->hasFunction(0x11E450u)) {
        auto targetFn = runtime->lookupFunction(0x11E450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E40Cu; }
        if (ctx->pc != 0x11E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysignf_0x11e450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E40Cu; }
        if (ctx->pc != 0x11E40Cu) { return; }
    }
    ctx->pc = 0x11E40Cu;
    // 0x11e40c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11E40Cu;
    {
        const bool branch_taken_0x11e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E40Cu;
            // 0x11e410: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e40c) {
            ctx->pc = 0x11E440u;
            goto label_11e440;
        }
    }
    ctx->pc = 0x11E414u;
label_11e414:
    // 0x11e414: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x11e418: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x11e41c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e41cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e420: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x11e420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x11e424: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e424u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11e428: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11e428u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11e42c: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x11e42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x11e430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e434: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x11e434u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11e438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11e43c: 0x0  nop
    ctx->pc = 0x11e43cu;
    // NOP
label_11e440:
    // 0x11e440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e444: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x11e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11e448:
    // 0x11e448: 0x3e00008  jr          $ra
    ctx->pc = 0x11E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E448u;
            // 0x11e44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E338u: goto label_11e338;
            case 0x11E380u: goto label_11e380;
            case 0x11E398u: goto label_11e398;
            case 0x11E3D0u: goto label_11e3d0;
            case 0x11E3F4u: goto label_11e3f4;
            case 0x11E400u: goto label_11e400;
            case 0x11E414u: goto label_11e414;
            case 0x11E440u: goto label_11e440;
            case 0x11E448u: goto label_11e448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E450u;
}
