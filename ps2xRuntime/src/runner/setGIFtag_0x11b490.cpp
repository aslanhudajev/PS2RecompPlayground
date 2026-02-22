#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setGIFtag
// Address: 0x11b490 - 0x11b4e4
void setGIFtag_0x11b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b490u;

    // 0x11b490: 0x94b80  sll         $t1, $t1, 14
    ctx->pc = 0x11b490u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
    // 0x11b494: 0x63700  sll         $a2, $a2, 28
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 28));
    // 0x11b498: 0x73e80  sll         $a3, $a3, 26
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    // 0x11b49c: 0x843c0  sll         $t0, $t0, 15
    ctx->pc = 0x11b49cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x11b4a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x11b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11b4a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11b4a8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x11b4a8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x11b4ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11b4acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x11b4b0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x11b4b0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x11b4b4: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x11b4b8: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x11b4b8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
    // 0x11b4bc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x11b4bcu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x11b4c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11b4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11b4c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11b4c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11b4c8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11b4c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11b4cc: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x11b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x11b4d0: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x11b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x11b4d4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b4d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4DCu;
            // 0x11b4e0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B4E4u;
}
