#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawFlipScreen
// Address: 0x105388 - 0x105558
void drawFlipScreen_0x105388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105388u;

    // 0x105388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10538c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x105390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105394: 0x24433348  addiu       $v1, $v0, 0x3348
    ctx->pc = 0x105394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13128));
    // 0x105398: 0xdc453348  ld          $a1, 0x3348($v0)
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13128)));
    // 0x10539c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053a0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1053a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1053a4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1053a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x1053a8: 0xc0432fc  jal         func_10CBF0
    ctx->pc = 0x1053A8u;
    SET_GPR_U32(ctx, 31, 0x1053B0u);
    ctx->pc = 0x1053ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1053A8u;
            // 0x1053ac: 0xffa60008  sd          $a2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBF0u;
    if (runtime->hasFunction(0x10CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053B0u; }
        if (ctx->pc != 0x1053B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053B0u; }
        if (ctx->pc != 0x1053B0u) { return; }
    }
    ctx->pc = 0x1053B0u;
    // 0x1053b0: 0x97848494  lhu         $a0, -0x7B6C($gp)
    ctx->pc = 0x1053b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x1053b4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1053b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1053b8: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x1053bc: 0x3c0d1200  lui         $t5, 0x1200
    ctx->pc = 0x1053bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4608 << 16));
    // 0x1053c0: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x1053c0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1053c4: 0xa7848496  sh          $a0, -0x7B6A($gp)
    ctx->pc = 0x1053c4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 4));
    // 0x1053c8: 0xa7828494  sh          $v0, -0x7B6C($gp)
    ctx->pc = 0x1053c8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 2));
    // 0x1053cc: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x1053ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1053d0: 0x3c0b1200  lui         $t3, 0x1200
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4608 << 16));
    // 0x1053d4: 0x3c081200  lui         $t0, 0x1200
    ctx->pc = 0x1053d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4608 << 16));
    // 0x1053d8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1053d8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1053dc: 0x356b0020  ori         $t3, $t3, 0x20
    ctx->pc = 0x1053dcu;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)32u)));
    // 0x1053e0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1053e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1053e4: 0x35080070  ori         $t0, $t0, 0x70
    ctx->pc = 0x1053e4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)112u)));
    // 0x1053e8: 0x3c091200  lui         $t1, 0x1200
    ctx->pc = 0x1053e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4608 << 16));
    // 0x1053ec: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x1053ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x1053f0: 0x35290090  ori         $t1, $t1, 0x90
    ctx->pc = 0x1053f0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)144u)));
    // 0x1053f4: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1053f4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)128u)));
    // 0x1053f8: 0x3c0a1200  lui         $t2, 0x1200
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4608 << 16));
    // 0x1053fc: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x1053fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x105400: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x105404: 0x354a00a0  ori         $t2, $t2, 0xA0
    ctx->pc = 0x105404u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)160u)));
    // 0x105408: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x105408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10540c: 0x34e700e0  ori         $a3, $a3, 0xE0
    ctx->pc = 0x10540cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)224u)));
    // 0x105410: 0x240c0090  addiu       $t4, $zero, 0x90
    ctx->pc = 0x105410u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x105414: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x105414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x105418: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x105418u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x10541c: 0x24a514e0  addiu       $a1, $a1, 0x14E0
    ctx->pc = 0x10541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    // 0x105420: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x105420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x105424: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x105424u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x105428: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x105428u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10542c: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x10542cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x105430: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x105430u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x105434: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x105434u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x105438: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x105438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x10543c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x10543cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x105440: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x105440u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x105444: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x105444u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x105448: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x10544c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x10544cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x105450: 0x97848496  lhu         $a0, -0x7B6A($gp)
    ctx->pc = 0x105450u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935702)));
    // 0x105454: 0x8c2018  mult        $a0, $a0, $t4
    ctx->pc = 0x105454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x105458: 0xc0432c2  jal         func_10CB08
    ctx->pc = 0x105458u;
    SET_GPR_U32(ctx, 31, 0x105460u);
    ctx->pc = 0x10545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105458u;
            // 0x10545c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB08u;
    if (runtime->hasFunction(0x10CB08u)) {
        auto targetFn = runtime->lookupFunction(0x10CB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105460u; }
        if (ctx->pc != 0x105460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105460u; }
        if (ctx->pc != 0x105460u) { return; }
    }
    ctx->pc = 0x105460u;
    // 0x105460: 0x97858494  lhu         $a1, -0x7B6C($gp)
    ctx->pc = 0x105460u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x105464: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x105464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x105468: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x105468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x10546c: 0xfc240008  sd          $a0, 0x8($at)
    ctx->pc = 0x10546cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8), GPR_U64(ctx, 4));
    // 0x105470: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x105474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x105478: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x105478u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32772u)));
    // 0x10547c: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x10547cu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x105480: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x105480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105484: 0xfc220000  sd          $v0, 0x0($at)
    ctx->pc = 0x105484u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 0), GPR_U64(ctx, 2));
    // 0x105488: 0x27848498  addiu       $a0, $gp, -0x7B68
    ctx->pc = 0x105488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935704));
    // 0x10548c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10548cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x105490: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x105490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x105494: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x105494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x105498: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x105498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10549c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1054a0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1054a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1054a4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1054a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1054a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1054ac: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1054acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1054b0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1054b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1054b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1054b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1054b8: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1054b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1054bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1054bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1054c0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1054c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1054c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1054c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1054c8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1054cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1054ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1054d0: 0x34840280  ori         $a0, $a0, 0x280
    ctx->pc = 0x1054d0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)640u)));
    // 0x1054d4: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1054d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1054d8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1054d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1054dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1054dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1054e0: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1054e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1054e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1054e8: 0xfc220010  sd          $v0, 0x10($at)
    ctx->pc = 0x1054e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 16), GPR_U64(ctx, 2));
    // 0x1054ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1054f0: 0xfc280018  sd          $t0, 0x18($at)
    ctx->pc = 0x1054f0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 24), GPR_U64(ctx, 8));
    // 0x1054f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1054f8: 0xfc240020  sd          $a0, 0x20($at)
    ctx->pc = 0x1054f8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 32), GPR_U64(ctx, 4));
    // 0x1054fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105500: 0xfc230028  sd          $v1, 0x28($at)
    ctx->pc = 0x105500u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 3));
    // 0x105504: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x105504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105508: 0xfc250038  sd          $a1, 0x38($at)
    ctx->pc = 0x105508u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 5));
    // 0x10550c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x10550cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105510: 0xfc260040  sd          $a2, 0x40($at)
    ctx->pc = 0x105510u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 6));
    // 0x105514: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x105514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105518: 0xfc270048  sd          $a3, 0x48($at)
    ctx->pc = 0x105518u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 72), GPR_U64(ctx, 7));
    // 0x10551c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x10551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x105520: 0xfc200030  sd          $zero, 0x30($at)
    ctx->pc = 0x105520u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 0));
    // 0x105524: 0xf  sync
    ctx->pc = 0x105524u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105528: 0xc043948  jal         func_10E520
    ctx->pc = 0x105528u;
    SET_GPR_U32(ctx, 31, 0x105530u);
    ctx->pc = 0x10552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105528u;
            // 0x10552c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105530u; }
        if (ctx->pc != 0x105530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105530u; }
        if (ctx->pc != 0x105530u) { return; }
    }
    ctx->pc = 0x105530u;
    // 0x105530: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x105534: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x105538: 0xc04360c  jal         func_10D830
    ctx->pc = 0x105538u;
    SET_GPR_U32(ctx, 31, 0x105540u);
    ctx->pc = 0x10553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105538u;
            // 0x10553c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D830u;
    if (runtime->hasFunction(0x10D830u)) {
        auto targetFn = runtime->lookupFunction(0x10D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105540u; }
        if (ctx->pc != 0x105540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSendN_0x10d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105540u; }
        if (ctx->pc != 0x105540u) { return; }
    }
    ctx->pc = 0x105540u;
    // 0x105540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105544: 0xc043322  jal         func_10CC88
    ctx->pc = 0x105544u;
    SET_GPR_U32(ctx, 31, 0x10554Cu);
    ctx->pc = 0x105548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105544u;
            // 0x105548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10554Cu; }
        if (ctx->pc != 0x10554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10554Cu; }
        if (ctx->pc != 0x10554Cu) { return; }
    }
    ctx->pc = 0x10554Cu;
    // 0x10554c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105550: 0x3e00008  jr          $ra
    ctx->pc = 0x105550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105550u;
            // 0x105554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105558u;
}
