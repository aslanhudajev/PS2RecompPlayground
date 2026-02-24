#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _outputFrame
// Address: 0x124bb8 - 0x124c70
void _outputFrame_0x124bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_outputFrame_0x124bb8");
#endif

    ctx->pc = 0x124bb8u;

    // 0x124bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124bbc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x124bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124bc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x124bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc8: 0x8c6217bc  lw          $v0, 0x17BC($v1)
    ctx->pc = 0x124bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6076)));
    // 0x124bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124bd0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x124BD0u;
    {
        const bool branch_taken_0x124bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BD0u;
            // 0x124bd4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bd0) {
            ctx->pc = 0x124C4Cu;
            goto label_124c4c;
        }
    }
    ctx->pc = 0x124BD8u;
    // 0x124bd8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x124bdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124be0: 0x8c6219ac  lw          $v0, 0x19AC($v1)
    ctx->pc = 0x124be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6572)));
    // 0x124be4: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x124BE4u;
    {
        const bool branch_taken_0x124be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x124BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BE4u;
            // 0x124be8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124be4) {
            ctx->pc = 0x124C18u;
            goto label_124c18;
        }
    }
    ctx->pc = 0x124BECu;
    // 0x124bec: 0x8c43197c  lw          $v1, 0x197C($v0)
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x124bf0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124BF0u;
    {
        const bool branch_taken_0x124bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x124BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BF0u;
            // 0x124bf4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bf0) {
            ctx->pc = 0x124C04u;
            goto label_124c04;
        }
    }
    ctx->pc = 0x124BF8u;
    // 0x124bf8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124BFCu;
    {
        const bool branch_taken_0x124bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BFCu;
            // 0x124c00: 0x8c441808  lw          $a0, 0x1808($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bfc) {
            ctx->pc = 0x124C08u;
            goto label_124c08;
        }
    }
    ctx->pc = 0x124C04u;
label_124c04:
    // 0x124c04: 0x8c441800  lw          $a0, 0x1800($v0)
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6144)));
label_124c08:
    // 0x124c08: 0xc04952c  jal         func_1254B0
    ctx->pc = 0x124C08u;
    SET_GPR_U32(ctx, 31, 0x124C10u);
    ctx->pc = 0x124C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C08u;
            // 0x124c0c: 0x24c5ffff  addiu       $a1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (runtime->hasFunction(0x1254B0u)) {
        auto targetFn = runtime->lookupFunction(0x1254B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C10u; }
        if (ctx->pc != 0x124C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x1254b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C10u; }
        if (ctx->pc != 0x124C10u) { return; }
    }
    ctx->pc = 0x124C10u;
    // 0x124c10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x124C10u;
    {
        const bool branch_taken_0x124c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C10u;
            // 0x124c14: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c10) {
            ctx->pc = 0x124C50u;
            goto label_124c50;
        }
    }
    ctx->pc = 0x124C18u;
label_124c18:
    // 0x124c18: 0x8c43197c  lw          $v1, 0x197C($v0)
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x124c1c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124C1Cu;
    {
        const bool branch_taken_0x124c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x124C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C1Cu;
            // 0x124c20: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c1c) {
            ctx->pc = 0x124C38u;
            goto label_124c38;
        }
    }
    ctx->pc = 0x124C24u;
    // 0x124c24: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124c28: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x124c2c: 0x8c441814  lw          $a0, 0x1814($v0)
    ctx->pc = 0x124c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
    // 0x124c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124C30u;
    {
        const bool branch_taken_0x124c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C30u;
            // 0x124c34: 0x8c651820  lw          $a1, 0x1820($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c30) {
            ctx->pc = 0x124C44u;
            goto label_124c44;
        }
    }
    ctx->pc = 0x124C38u;
label_124c38:
    // 0x124c38: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x124c3c: 0x8c44180c  lw          $a0, 0x180C($v0)
    ctx->pc = 0x124c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6156)));
    // 0x124c40: 0x8c651818  lw          $a1, 0x1818($v1)
    ctx->pc = 0x124c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6168)));
label_124c44:
    // 0x124c44: 0xc049572  jal         func_1255C8
    ctx->pc = 0x124C44u;
    SET_GPR_U32(ctx, 31, 0x124C4Cu);
    ctx->pc = 0x124C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C44u;
            // 0x124c48: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255C8u;
    if (runtime->hasFunction(0x1255C8u)) {
        auto targetFn = runtime->lookupFunction(0x1255C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C4Cu; }
        if (ctx->pc != 0x124C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x1255c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C4Cu; }
        if (ctx->pc != 0x124C4Cu) { return; }
    }
    ctx->pc = 0x124C4Cu;
label_124c4c:
    // 0x124c4c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x124c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_124c50:
    // 0x124c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124c54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124C54u;
    {
        const bool branch_taken_0x124c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C54u;
            // 0x124c58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c54) {
            ctx->pc = 0x124C64u;
            goto label_124c64;
        }
    }
    ctx->pc = 0x124C5Cu;
    // 0x124c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124c60: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x124c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_124c64:
    // 0x124c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124c68: 0x3e00008  jr          $ra
    ctx->pc = 0x124C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C68u;
            // 0x124c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124C04u: goto label_124c04;
            case 0x124C08u: goto label_124c08;
            case 0x124C18u: goto label_124c18;
            case 0x124C38u: goto label_124c38;
            case 0x124C44u: goto label_124c44;
            case 0x124C4Cu: goto label_124c4c;
            case 0x124C50u: goto label_124c50;
            case 0x124C64u: goto label_124c64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124C70u;
}
