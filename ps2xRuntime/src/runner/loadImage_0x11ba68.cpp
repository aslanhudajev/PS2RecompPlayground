#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadImage
// Address: 0x11ba68 - 0x11baa0
void loadImage_0x11ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ba68u;

    // 0x11ba68: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11ba6c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x11ba70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ba70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11ba74: 0x34a5a030  ori         $a1, $a1, 0xA030
    ctx->pc = 0x11ba74u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)41008u)));
    // 0x11ba78: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11ba78u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ba7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11ba80: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x11ba80u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x11ba84: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x11ba84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40992u)));
    // 0x11ba88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11ba88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ba8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ba90: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11ba90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40960u)));
    // 0x11ba94: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11ba98: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA98u;
            // 0x11ba9c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BAA0u;
}
