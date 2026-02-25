#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: camera_init2
// Address: 0x1611e0 - 0x16129c
void camera_init2_0x1611e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("camera_init2_0x1611e0");
#endif

    ctx->pc = 0x1611e0u;

    // 0x1611e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1611e4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1611e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1611e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1611ec: 0x3c034780  lui         $v1, 0x4780
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18304 << 16));
    // 0x1611f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1611f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1611f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1611f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1611f8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1611fc: 0x3c023ef0  lui         $v0, 0x3EF0
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16112 << 16));
    // 0x161200: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x161200u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x161204: 0x3443a3d7  ori         $v1, $v0, 0xA3D7
    ctx->pc = 0x161204u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)41943u)));
    // 0x161208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16120c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x16120cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x161210: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x161210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x161214: 0x460c0382  mul.s       $f14, $f0, $f12
    ctx->pc = 0x161214u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x161218: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x16121c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161220: 0x46006c86  mov.s       $f18, $f13
    ctx->pc = 0x161220u;
    ctx->f[18] = FPU_MOV_S(ctx->f[13]);
    // 0x161224: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x161224u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x161228: 0x44838800  mtc1        $v1, $f17
    ctx->pc = 0x161228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x16122c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x16122cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161230: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x161230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x161234: 0x24844970  addiu       $a0, $a0, 0x4970
    ctx->pc = 0x161234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
    // 0x161238: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x161238u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x16123c: 0xc0584a8  jal         func_1612A0
    ctx->pc = 0x16123Cu;
    SET_GPR_U32(ctx, 31, 0x161244u);
    ctx->pc = 0x161240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16123Cu;
            // 0x161240: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1612A0u;
    if (runtime->hasFunction(0x1612A0u)) {
        auto targetFn = runtime->lookupFunction(0x1612A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161244u; }
        if (ctx->pc != 0x161244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Camera_SetClipScreen_0x1612a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161244u; }
        if (ctx->pc != 0x161244u) { return; }
    }
    ctx->pc = 0x161244u;
    // 0x161244: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161248: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x16124c: 0x24844a00  addiu       $a0, $a0, 0x4A00
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18944));
    // 0x161250: 0xc05854c  jal         func_161530
    ctx->pc = 0x161250u;
    SET_GPR_U32(ctx, 31, 0x161258u);
    ctx->pc = 0x161254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161250u;
            // 0x161254: 0x24a54970  addiu       $a1, $a1, 0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161530u;
    if (runtime->hasFunction(0x161530u)) {
        auto targetFn = runtime->lookupFunction(0x161530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161258u; }
        if (ctx->pc != 0x161258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vu0RotCameraMatrix_0x161530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161258u; }
        if (ctx->pc != 0x161258u) { return; }
    }
    ctx->pc = 0x161258u;
    // 0x161258: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x161258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x16125c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x16125cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x161260: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x161260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x161264: 0x24844ac0  addiu       $a0, $a0, 0x4AC0
    ctx->pc = 0x161264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19136));
    // 0x161268: 0x24a54a40  addiu       $a1, $a1, 0x4A40
    ctx->pc = 0x161268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19008));
    // 0x16126c: 0xc04b6ca  jal         func_12DB28
    ctx->pc = 0x16126Cu;
    SET_GPR_U32(ctx, 31, 0x161274u);
    ctx->pc = 0x161270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16126Cu;
            // 0x161270: 0x24c64a00  addiu       $a2, $a2, 0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DB28u;
    if (runtime->hasFunction(0x12DB28u)) {
        auto targetFn = runtime->lookupFunction(0x12DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161274u; }
        if (ctx->pc != 0x161274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x12db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161274u; }
        if (ctx->pc != 0x161274u) { return; }
    }
    ctx->pc = 0x161274u;
    // 0x161274: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x161278: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x16127c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x16127cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x161280: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x161280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x161284: 0x24a54a80  addiu       $a1, $a1, 0x4A80
    ctx->pc = 0x161284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
    // 0x161288: 0xc04b6ca  jal         func_12DB28
    ctx->pc = 0x161288u;
    SET_GPR_U32(ctx, 31, 0x161290u);
    ctx->pc = 0x16128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161288u;
            // 0x16128c: 0x24c64a00  addiu       $a2, $a2, 0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DB28u;
    if (runtime->hasFunction(0x12DB28u)) {
        auto targetFn = runtime->lookupFunction(0x12DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161290u; }
        if (ctx->pc != 0x161290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x12db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161290u; }
        if (ctx->pc != 0x161290u) { return; }
    }
    ctx->pc = 0x161290u;
    // 0x161290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161294: 0x3e00008  jr          $ra
    ctx->pc = 0x161294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161294u;
            // 0x161298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16129Cu;
}
