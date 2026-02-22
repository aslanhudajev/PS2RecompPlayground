#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StopAllSounds
// Address: 0x10b218 - 0x10b294
void StopAllSounds_0x10b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b218u;

    // 0x10b218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b21c: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x10b21cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x10b220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b228: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x10b228u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
    // 0x10b22c: 0x24061600  addiu       $a2, $zero, 0x1600
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x10b230: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x10b230u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x10b234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b238: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B238u;
    SET_GPR_U32(ctx, 31, 0x10B240u);
    ctx->pc = 0x10B23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B238u;
            // 0x10b23c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B240u; }
        if (ctx->pc != 0x10B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B240u; }
        if (ctx->pc != 0x10B240u) { return; }
    }
    ctx->pc = 0x10B240u;
    // 0x10b240: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B240u;
    {
        const bool branch_taken_0x10b240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b240) {
            ctx->pc = 0x10B244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B240u;
            // 0x10b244: 0x3c0700ff  lui         $a3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B258u;
            goto label_10b258;
        }
    }
    ctx->pc = 0x10B248u;
    // 0x10b248: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b24c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B24Cu;
    SET_GPR_U32(ctx, 31, 0x10B254u);
    ctx->pc = 0x10B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B24Cu;
            // 0x10b250: 0x24843868  addiu       $a0, $a0, 0x3868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B254u; }
        if (ctx->pc != 0x10B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B254u; }
        if (ctx->pc != 0x10B254u) { return; }
    }
    ctx->pc = 0x10B254u;
    // 0x10b254: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x10b254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
label_10b258:
    // 0x10b258: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b25c: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x10b25cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
    // 0x10b260: 0x24061601  addiu       $a2, $zero, 0x1601
    ctx->pc = 0x10b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    // 0x10b264: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B264u;
    SET_GPR_U32(ctx, 31, 0x10B26Cu);
    ctx->pc = 0x10B268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B264u;
            // 0x10b268: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B26Cu; }
        if (ctx->pc != 0x10B26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B26Cu; }
        if (ctx->pc != 0x10B26Cu) { return; }
    }
    ctx->pc = 0x10B26Cu;
    // 0x10b26c: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B26Cu;
    {
        const bool branch_taken_0x10b26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B26Cu;
            // 0x10b270: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b26c) {
            ctx->pc = 0x10B288u;
            goto label_10b288;
        }
    }
    ctx->pc = 0x10B274u;
    // 0x10b274: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b27c: 0x24843868  addiu       $a0, $a0, 0x3868
    ctx->pc = 0x10b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14440));
    // 0x10b280: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B280u;
    ctx->pc = 0x10B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B280u;
            // 0x10b284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B288u;
label_10b288:
    // 0x10b288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b28c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B28Cu;
            // 0x10b290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B258u: goto label_10b258;
            case 0x10B288u: goto label_10b288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B294u;
}
