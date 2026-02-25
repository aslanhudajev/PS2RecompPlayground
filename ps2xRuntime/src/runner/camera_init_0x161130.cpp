#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: camera_init
// Address: 0x161130 - 0x1611dc
void camera_init_0x161130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("camera_init_0x161130");
#endif

    ctx->pc = 0x161130u;

    // 0x161130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161134: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x161138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16113c: 0x24429d00  addiu       $v0, $v0, -0x6300
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
    // 0x161140: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x161140u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161144: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x161148: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x161148u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16114c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161150: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x161150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x161154: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x161158: 0x24844970  addiu       $a0, $a0, 0x4970
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
    // 0x16115c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x16115cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x161160: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x161160u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x161164: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x161164u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x161168: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x161168u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x16116c: 0xc058440  jal         func_161100
    ctx->pc = 0x16116Cu;
    SET_GPR_U32(ctx, 31, 0x161174u);
    ctx->pc = 0x161170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16116Cu;
            // 0x161170: 0x7ca20030  sq          $v0, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161100u;
    if (runtime->hasFunction(0x161100u)) {
        auto targetFn = runtime->lookupFunction(0x161100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161174u; }
        if (ctx->pc != 0x161174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Camera_SetCamera_fromCameraPos_0x161100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161174u; }
        if (ctx->pc != 0x161174u) { return; }
    }
    ctx->pc = 0x161174u;
    // 0x161174: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x161174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161178: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x161178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x16117c: 0x248449f0  addiu       $a0, $a0, 0x49F0
    ctx->pc = 0x16117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18928));
    // 0x161180: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x161180u;
    SET_GPR_U32(ctx, 31, 0x161188u);
    ctx->pc = 0x161184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161180u;
            // 0x161184: 0x24a59cf0  addiu       $a1, $a1, -0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161188u; }
        if (ctx->pc != 0x161188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161188u; }
        if (ctx->pc != 0x161188u) { return; }
    }
    ctx->pc = 0x161188u;
    // 0x161188: 0x3c03444b  lui         $v1, 0x444B
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17483 << 16));
    // 0x16118c: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x161190: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x161190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161194: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x161194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161198: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x161198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16119c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1611a0: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x1611a4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1611a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1611a8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1611a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1611ac: 0xc0584b8  jal         func_1612E0
    ctx->pc = 0x1611ACu;
    SET_GPR_U32(ctx, 31, 0x1611B4u);
    ctx->pc = 0x1611B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1611ACu;
            // 0x1611b0: 0x24844970  addiu       $a0, $a0, 0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1612E0u;
    if (runtime->hasFunction(0x1612E0u)) {
        auto targetFn = runtime->lookupFunction(0x1612E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611B4u; }
        if (ctx->pc != 0x1611B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Camera_SetClipData_0x1612e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611B4u; }
        if (ctx->pc != 0x1611B4u) { return; }
    }
    ctx->pc = 0x1611B4u;
    // 0x1611b4: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1611b8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1611bc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1611bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1611c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1611c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1611c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1611c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1611c8: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1611C8u;
    SET_GPR_U32(ctx, 31, 0x1611D0u);
    ctx->pc = 0x1611E0u;
    if (runtime->hasFunction(0x1611E0u)) {
        auto targetFn = runtime->lookupFunction(0x1611E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611D0u; }
        if (ctx->pc != 0x1611D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        camera_init2_0x1611e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611D0u; }
        if (ctx->pc != 0x1611D0u) { return; }
    }
    ctx->pc = 0x1611D0u;
    // 0x1611d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1611d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1611d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1611D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1611D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611D4u;
            // 0x1611d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1611DCu;
}
