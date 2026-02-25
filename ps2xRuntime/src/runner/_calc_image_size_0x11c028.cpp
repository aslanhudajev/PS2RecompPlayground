#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _calc_image_size
// Address: 0x11c028 - 0x11c098
void _calc_image_size_0x11c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_calc_image_size_0x11c028");
#endif

    ctx->pc = 0x11c028u;

    // 0x11c028: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x11c028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x11c02c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11C02Cu;
    {
        const bool branch_taken_0x11c02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C02Cu;
            // 0x11c030: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c02c) {
            ctx->pc = 0x11C090u;
            goto label_11c090;
        }
    }
    ctx->pc = 0x11C034u;
    // 0x11c034: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11c034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11c038: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    // 0x11c03c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c040: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c044: 0x800008  jr          $a0
    ctx->pc = 0x11C044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C04Cu;
label_11c04c:
    // 0x11c04c: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x11c04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c050: 0x3e00008  jr          $ra
    ctx->pc = 0x11C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C050u;
            // 0x11c054: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C058u;
label_11c058:
    // 0x11c058: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x11c058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c05c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11c060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11c064: 0x3e00008  jr          $ra
    ctx->pc = 0x11C064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C064u;
            // 0x11c068: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C06Cu;
label_11c06c:
    // 0x11c06c: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x11c06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c070: 0x3e00008  jr          $ra
    ctx->pc = 0x11C070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C070u;
            // 0x11c074: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C078u;
label_11c078:
    // 0x11c078: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x11c078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c07c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C07Cu;
            // 0x11c080: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C084u;
label_11c084:
    // 0x11c084: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x11c084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11c088: 0x3e00008  jr          $ra
    ctx->pc = 0x11C088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C088u;
            // 0x11c08c: 0x21143  sra         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C090u;
label_11c090:
    // 0x11c090: 0x3e00008  jr          $ra
    ctx->pc = 0x11C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C090u;
            // 0x11c094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C04Cu: goto label_11c04c;
            case 0x11C058u: goto label_11c058;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C078u: goto label_11c078;
            case 0x11C084u: goto label_11c084;
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C098u;
}
