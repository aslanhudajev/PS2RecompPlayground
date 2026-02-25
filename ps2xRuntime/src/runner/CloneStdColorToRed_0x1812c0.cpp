#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneStdColorToRed
// Address: 0x1812c0 - 0x181370
void CloneStdColorToRed_0x1812c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneStdColorToRed_0x1812c0");
#endif

    ctx->pc = 0x1812c0u;

    // 0x1812c0: 0x28a1003d  slti        $at, $a1, 0x3D
    ctx->pc = 0x1812c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1812c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1812C4u;
    {
        const bool branch_taken_0x1812c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1812c4) {
            ctx->pc = 0x1812D0u;
            goto label_1812d0;
        }
    }
    ctx->pc = 0x1812CCu;
    // 0x1812cc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1812d0:
    // 0x1812d0: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
    // 0x1812d4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1812d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1812d8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1812dc: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1812dcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1812e0: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x1812e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
    // 0x1812e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1812e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1812e8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1812ec: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1812ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1812f0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1812f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1812f4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1812f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1812f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1812f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1812fc: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1812fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x181300: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x181300u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x181304: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x181304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
    // 0x181308: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x181308u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x18130c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x18130cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181310: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x181310u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x181314: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x181314u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x181318: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x181318u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x18131c: 0xe48200c0  swc1        $f2, 0xC0($a0)
    ctx->pc = 0x18131cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x181320: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x181320u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181324: 0xe48300c4  swc1        $f3, 0xC4($a0)
    ctx->pc = 0x181324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x181328: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x181328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x18132c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x18132cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x181330: 0xe48300c8  swc1        $f3, 0xC8($a0)
    ctx->pc = 0x181330u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x181334: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x181334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x181338: 0xac8600cc  sw          $a2, 0xCC($a0)
    ctx->pc = 0x181338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 6));
    // 0x18133c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x18133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x181340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181344: 0xe48200d4  swc1        $f2, 0xD4($a0)
    ctx->pc = 0x181344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x181348: 0xe48200d8  swc1        $f2, 0xD8($a0)
    ctx->pc = 0x181348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x18134c: 0x46050800  add.s       $f0, $f1, $f5
    ctx->pc = 0x18134cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x181350: 0xac8600dc  sw          $a2, 0xDC($a0)
    ctx->pc = 0x181350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 6));
    // 0x181354: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x181354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x181358: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x181358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x18135c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18135cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181360: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x181360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x181364: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x181364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x181368: 0x3e00008  jr          $ra
    ctx->pc = 0x181368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181368u;
            // 0x18136c: 0xac8600ec  sw          $a2, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1812D0u: goto label_1812d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181370u;
}
