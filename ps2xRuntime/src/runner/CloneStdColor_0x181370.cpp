#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneStdColor
// Address: 0x181370 - 0x1813c0
void CloneStdColor_0x181370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneStdColor_0x181370");
#endif

    ctx->pc = 0x181370u;

    // 0x181370: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x181370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x181374: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
    // 0x181378: 0x3467cccd  ori         $a3, $v1, 0xCCCD
    ctx->pc = 0x181378u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18137c: 0xac8700c0  sw          $a3, 0xC0($a0)
    ctx->pc = 0x18137cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 7));
    // 0x181380: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x181380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x181384: 0xac8700c4  sw          $a3, 0xC4($a0)
    ctx->pc = 0x181384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 7));
    // 0x181388: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x181388u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18138c: 0xac8700c8  sw          $a3, 0xC8($a0)
    ctx->pc = 0x18138cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 7));
    // 0x181390: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x181394: 0xac8600cc  sw          $a2, 0xCC($a0)
    ctx->pc = 0x181394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 6));
    // 0x181398: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x181398u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18139c: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x18139cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x1813a0: 0xac8500d4  sw          $a1, 0xD4($a0)
    ctx->pc = 0x1813a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
    // 0x1813a4: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x1813a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x1813a8: 0xac8600dc  sw          $a2, 0xDC($a0)
    ctx->pc = 0x1813a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 6));
    // 0x1813ac: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1813acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1813b0: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x1813b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x1813b4: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x1813b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x1813b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1813B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813B8u;
            // 0x1813bc: 0xac8600ec  sw          $a2, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1813C0u;
}
