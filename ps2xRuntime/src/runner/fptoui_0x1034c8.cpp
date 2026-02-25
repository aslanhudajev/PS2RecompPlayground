#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fptoui
// Address: 0x1034c8 - 0x103560
void fptoui_0x1034c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fptoui_0x1034c8");
#endif

    ctx->pc = 0x1034c8u;

    // 0x1034c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1034c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1034cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1034ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1034d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1034d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1034d4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1034d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1034d8: 0xc040ace  jal         func_102B38
    ctx->pc = 0x1034D8u;
    SET_GPR_U32(ctx, 31, 0x1034E0u);
    ctx->pc = 0x1034DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1034D8u;
            // 0x1034dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1034E0u; }
        if (ctx->pc != 0x1034E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1034E0u; }
        if (ctx->pc != 0x1034E0u) { return; }
    }
    ctx->pc = 0x1034E0u;
    // 0x1034e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1034e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1034e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x1034e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1034E8u;
    {
        const bool branch_taken_0x1034e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034E8u;
            // 0x1034ec: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e8) {
            ctx->pc = 0x1034F8u;
            goto label_1034f8;
        }
    }
    ctx->pc = 0x1034F0u;
    // 0x1034f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1034F0u;
    {
        const bool branch_taken_0x1034f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034F0u;
            // 0x1034f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034f0) {
            ctx->pc = 0x103500u;
            goto label_103500;
        }
    }
    ctx->pc = 0x1034F8u;
label_1034f8:
    // 0x1034f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1034F8u;
    {
        const bool branch_taken_0x1034f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1034FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1034F8u;
            // 0x1034fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034f8) {
            ctx->pc = 0x103554u;
            goto label_103554;
        }
    }
    ctx->pc = 0x103500u;
label_103500:
    // 0x103500: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x103500u;
    {
        const bool branch_taken_0x103500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103500u;
            // 0x103504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103500) {
            ctx->pc = 0x103554u;
            goto label_103554;
        }
    }
    ctx->pc = 0x103508u;
    // 0x103508: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x103508u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x10350c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10350Cu;
    {
        const bool branch_taken_0x10350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10350Cu;
            // 0x103510: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10350c) {
            ctx->pc = 0x103524u;
            goto label_103524;
        }
    }
    ctx->pc = 0x103514u;
    // 0x103514: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x103514u;
    {
        const bool branch_taken_0x103514 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x103518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103514u;
            // 0x103518: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103514) {
            ctx->pc = 0x1034F8u;
            goto label_1034f8;
        }
    }
    ctx->pc = 0x10351Cu;
    // 0x10351c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10351Cu;
    {
        const bool branch_taken_0x10351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10351c) {
            ctx->pc = 0x103520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10351Cu;
            // 0x103520: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x103530u;
            goto label_103530;
        }
    }
    ctx->pc = 0x103524u;
label_103524:
    // 0x103524: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x103524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x103528: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x103528u;
    {
        const bool branch_taken_0x103528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103528u;
            // 0x10352c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103528) {
            ctx->pc = 0x103554u;
            goto label_103554;
        }
    }
    ctx->pc = 0x103530u;
label_103530:
    // 0x103530: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x103530u;
    {
        const bool branch_taken_0x103530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103530) {
            ctx->pc = 0x103534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x103530u;
            // 0x103534: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x103548u;
            goto label_103548;
        }
    }
    ctx->pc = 0x103538u;
    // 0x103538: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x103538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x10353c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x10353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x103540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103540u;
    {
        const bool branch_taken_0x103540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103540u;
            // 0x103544: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103540) {
            ctx->pc = 0x103554u;
            goto label_103554;
        }
    }
    ctx->pc = 0x103548u;
label_103548:
    // 0x103548: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x103548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x10354c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x103550: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x103550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_103554:
    // 0x103554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103558: 0x3e00008  jr          $ra
    ctx->pc = 0x103558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103558u;
            // 0x10355c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1034F8u: goto label_1034f8;
            case 0x103500u: goto label_103500;
            case 0x103524u: goto label_103524;
            case 0x103530u: goto label_103530;
            case 0x103548u: goto label_103548;
            case 0x103554u: goto label_103554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103560u;
}
