#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setDMAscTag
// Address: 0x11b438 - 0x11b48c
void setDMAscTag_0x11b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setDMAscTag_0x11b438");
#endif

    ctx->pc = 0x11b438u;

    // 0x11b438: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b43c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11b43cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b440: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x11b440u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65520u)));
    // 0x11b444: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11b444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b448: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b44c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11b44cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11b450: 0x52ffc  dsll32      $a1, $a1, 31
    ctx->pc = 0x11b450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 31));
    // 0x11b454: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x11b454u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x11b458: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x11b458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x11b45c: 0x7387a  dsrl        $a3, $a3, 1
    ctx->pc = 0x11b45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x11b460: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11b460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b464: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x11b464u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 10)));
    // 0x11b468: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x11b468u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x11b46c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b46cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b470: 0x949ba  dsrl        $t1, $t1, 6
    ctx->pc = 0x11b470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 6);
    // 0x11b474: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x11b474u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11b478: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x11b478u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x11b47c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b480: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11b480u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b484: 0x3e00008  jr          $ra
    ctx->pc = 0x11B484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B484u;
            // 0x11b488: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B48Cu;
}
