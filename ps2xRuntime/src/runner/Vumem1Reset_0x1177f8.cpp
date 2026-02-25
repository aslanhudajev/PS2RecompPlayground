#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1Reset
// Address: 0x1177f8 - 0x11783c
void Vumem1Reset_0x1177f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1Reset_0x1177f8");
#endif

    ctx->pc = 0x1177f8u;

    // 0x1177f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1177fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x117800: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x117804: 0x8c867208  lw          $a2, 0x7208($a0)
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29192)));
    // 0x117808: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x117808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x11780c: 0x8c4a7220  lw          $t2, 0x7220($v0)
    ctx->pc = 0x11780cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29216)));
    // 0x117810: 0x8c697224  lw          $t1, 0x7224($v1)
    ctx->pc = 0x117810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29220)));
    // 0x117814: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x117814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x117818: 0x8ce4720c  lw          $a0, 0x720C($a3)
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 29196)));
    // 0x11781c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x117820: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x117820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x117824: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x117828: 0xad0a7218  sw          $t2, 0x7218($t0)
    ctx->pc = 0x117828u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 29208), GPR_U32(ctx, 10));
    // 0x11782c: 0xaca9721c  sw          $t1, 0x721C($a1)
    ctx->pc = 0x11782cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 29212), GPR_U32(ctx, 9));
    // 0x117830: 0xac667210  sw          $a2, 0x7210($v1)
    ctx->pc = 0x117830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29200), GPR_U32(ctx, 6));
    // 0x117834: 0x3e00008  jr          $ra
    ctx->pc = 0x117834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117834u;
            // 0x117838: 0xac447214  sw          $a0, 0x7214($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11783Cu;
}
