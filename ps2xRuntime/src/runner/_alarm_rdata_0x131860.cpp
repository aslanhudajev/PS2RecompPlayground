#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alarm_rdata
// Address: 0x131860 - 0x1318c0
void _alarm_rdata_0x131860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alarm_rdata_0x131860");
#endif

    ctx->pc = 0x131860u;

    // 0x131860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131864: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x131864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x131868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13186c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x13186cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8u)));
    // 0x131870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131874: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x131874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13187c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x13187cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131880: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x131884: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x131884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x131888: 0xc04c4a4  jal         func_131290
    ctx->pc = 0x131888u;
    SET_GPR_U32(ctx, 31, 0x131890u);
    ctx->pc = 0x13188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131888u;
            // 0x13188c: 0x8e09002c  lw          $t1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131290u;
    if (runtime->hasFunction(0x131290u)) {
        auto targetFn = runtime->lookupFunction(0x131290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131890u; }
        if (ctx->pc != 0x131890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isceSifSendCmd_0x131290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131890u; }
        if (ctx->pc != 0x131890u) { return; }
    }
    ctx->pc = 0x131890u;
    // 0x131890: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131890u;
    {
        const bool branch_taken_0x131890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131890u;
            // 0x131894: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131890) {
            ctx->pc = 0x1318B4u;
            goto label_1318b4;
        }
    }
    ctx->pc = 0x131898u;
    // 0x131898: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x131898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13189c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x13189cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1318a0: 0x24a51860  addiu       $a1, $a1, 0x1860
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6240));
    // 0x1318a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1318a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1318a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1318ac: 0x804ba90  j           func_12EA40
    ctx->pc = 0x1318ACu;
    ctx->pc = 0x1318B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318ACu;
            // 0x1318b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA40u;
    if (runtime->hasFunction(0x12EA40u)) {
        auto targetFn = runtime->lookupFunction(0x12EA40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iSetAlarm_0x12ea40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1318B4u;
label_1318b4:
    // 0x1318b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1318b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1318b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1318B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1318BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1318B8u;
            // 0x1318bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1318B4u: goto label_1318b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1318C0u;
}
