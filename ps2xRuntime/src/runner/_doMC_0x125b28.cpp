#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _doMC
// Address: 0x125b28 - 0x125d44
void _doMC_0x125b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_doMC_0x125b28");
#endif

    ctx->pc = 0x125b28u;

label_125b28:
    // 0x125b28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x125b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_125b2c:
    // 0x125b2c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_125b30:
    // 0x125b30: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x125b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_125b34:
    // 0x125b34: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x125b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_125b38:
    // 0x125b38: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x125b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_125b3c:
    // 0x125b3c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x125b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_125b40:
    // 0x125b40: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x125b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_125b44:
    // 0x125b44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x125b44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125b48:
    // 0x125b48: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x125b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_125b4c:
    // 0x125b4c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x125b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_125b50:
    // 0x125b50: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x125b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_125b54:
    // 0x125b54: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_125b58:
    // 0x125b58: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x125b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_125b5c:
    // 0x125b5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x125b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_125b60:
    // 0x125b60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x125b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_125b64:
    // 0x125b64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x125b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_125b68:
    // 0x125b68: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x125b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
label_125b6c:
    // 0x125b6c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_125b70:
    if (ctx->pc == 0x125B70u) {
        ctx->pc = 0x125B70u;
            // 0x125b70: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->pc = 0x125B74u;
        goto label_125b74;
    }
    ctx->pc = 0x125B6Cu;
    {
        const bool branch_taken_0x125b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B6Cu;
            // 0x125b70: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b6c) {
            ctx->pc = 0x125C0Cu;
            goto label_125c0c;
        }
    }
    ctx->pc = 0x125B74u;
label_125b74:
    // 0x125b74: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x125b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_125b78:
    // 0x125b78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_125b7c:
    // 0x125b7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125b80:
    // 0x125b80: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_125b84:
    if (ctx->pc == 0x125B84u) {
        ctx->pc = 0x125B84u;
            // 0x125b84: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125B88u;
        goto label_125b88;
    }
    ctx->pc = 0x125B80u;
    {
        const bool branch_taken_0x125b80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x125B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B80u;
            // 0x125b84: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b80) {
            ctx->pc = 0x125C1Cu;
            goto label_125c1c;
        }
    }
    ctx->pc = 0x125B88u;
label_125b88:
    // 0x125b88: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_125b8c:
    // 0x125b8c: 0x269705b8  addiu       $s7, $s4, 0x5B8
    ctx->pc = 0x125b8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1464));
label_125b90:
    // 0x125b90: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x125b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_125b94:
    // 0x125b94: 0x269605c8  addiu       $s6, $s4, 0x5C8
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_125b98:
    // 0x125b98: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_125b9c:
    // 0x125b9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x125b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125ba0:
    // 0x125ba0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_125ba4:
    // 0x125ba4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x125ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_125ba8:
    // 0x125ba8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_125bac:
    // 0x125bac: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x125bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_125bb0:
    // 0x125bb0: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x125bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_125bb4:
    // 0x125bb4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_125bb8:
    // 0x125bb8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_125bbc:
    // 0x125bbc: 0x26320590  addiu       $s2, $s1, 0x590
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_125bc0:
    // 0x125bc0: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x125bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_125bc4:
    // 0x125bc4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_125bc8:
    // 0x125bc8: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_125bcc:
    // 0x125bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125bd0:
    // 0x125bd0: 0x60f809  jalr        $v1
label_125bd4:
    if (ctx->pc == 0x125BD4u) {
        ctx->pc = 0x125BD4u;
            // 0x125bd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x125BD8u;
        goto label_125bd8;
    }
    ctx->pc = 0x125BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125BD8u);
        ctx->pc = 0x125BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BD0u;
            // 0x125bd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            case 0x125C08u: goto label_125c08;
            case 0x125C0Cu: goto label_125c0c;
            case 0x125C10u: goto label_125c10;
            case 0x125C14u: goto label_125c14;
            case 0x125C18u: goto label_125c18;
            case 0x125C1Cu: goto label_125c1c;
            case 0x125C20u: goto label_125c20;
            case 0x125C24u: goto label_125c24;
            case 0x125C28u: goto label_125c28;
            case 0x125C2Cu: goto label_125c2c;
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125BD8u; }
            if (ctx->pc != 0x125BD8u) { return; }
        }
    }
    ctx->pc = 0x125BD8u;
label_125bd8:
    // 0x125bd8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_125bdc:
    // 0x125bdc: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x125bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_125be0:
    // 0x125be0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125be4:
    // 0x125be4: 0x40f809  jalr        $v0
label_125be8:
    if (ctx->pc == 0x125BE8u) {
        ctx->pc = 0x125BE8u;
            // 0x125be8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x125BECu;
        goto label_125bec;
    }
    ctx->pc = 0x125BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125BECu);
        ctx->pc = 0x125BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BE4u;
            // 0x125be8: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            case 0x125C08u: goto label_125c08;
            case 0x125C0Cu: goto label_125c0c;
            case 0x125C10u: goto label_125c10;
            case 0x125C14u: goto label_125c14;
            case 0x125C18u: goto label_125c18;
            case 0x125C1Cu: goto label_125c1c;
            case 0x125C20u: goto label_125c20;
            case 0x125C24u: goto label_125c24;
            case 0x125C28u: goto label_125c28;
            case 0x125C2Cu: goto label_125c2c;
            case 0x125C30u: goto label_125c30;
            case 0x125C34u: goto label_125c34;
            case 0x125C38u: goto label_125c38;
            case 0x125C3Cu: goto label_125c3c;
            case 0x125C40u: goto label_125c40;
            case 0x125C44u: goto label_125c44;
            case 0x125C48u: goto label_125c48;
            case 0x125C4Cu: goto label_125c4c;
            case 0x125C50u: goto label_125c50;
            case 0x125C54u: goto label_125c54;
            case 0x125C58u: goto label_125c58;
            case 0x125C5Cu: goto label_125c5c;
            case 0x125C60u: goto label_125c60;
            case 0x125C64u: goto label_125c64;
            case 0x125C68u: goto label_125c68;
            case 0x125C6Cu: goto label_125c6c;
            case 0x125C70u: goto label_125c70;
            case 0x125C74u: goto label_125c74;
            case 0x125C78u: goto label_125c78;
            case 0x125C7Cu: goto label_125c7c;
            case 0x125C80u: goto label_125c80;
            case 0x125C84u: goto label_125c84;
            case 0x125C88u: goto label_125c88;
            case 0x125C8Cu: goto label_125c8c;
            case 0x125C90u: goto label_125c90;
            case 0x125C94u: goto label_125c94;
            case 0x125C98u: goto label_125c98;
            case 0x125C9Cu: goto label_125c9c;
            case 0x125CA0u: goto label_125ca0;
            case 0x125CA4u: goto label_125ca4;
            case 0x125CA8u: goto label_125ca8;
            case 0x125CACu: goto label_125cac;
            case 0x125CB0u: goto label_125cb0;
            case 0x125CB4u: goto label_125cb4;
            case 0x125CB8u: goto label_125cb8;
            case 0x125CBCu: goto label_125cbc;
            case 0x125CC0u: goto label_125cc0;
            case 0x125CC4u: goto label_125cc4;
            case 0x125CC8u: goto label_125cc8;
            case 0x125CCCu: goto label_125ccc;
            case 0x125CD0u: goto label_125cd0;
            case 0x125CD4u: goto label_125cd4;
            case 0x125CD8u: goto label_125cd8;
            case 0x125CDCu: goto label_125cdc;
            case 0x125CE0u: goto label_125ce0;
            case 0x125CE4u: goto label_125ce4;
            case 0x125CE8u: goto label_125ce8;
            case 0x125CECu: goto label_125cec;
            case 0x125CF0u: goto label_125cf0;
            case 0x125CF4u: goto label_125cf4;
            case 0x125CF8u: goto label_125cf8;
            case 0x125CFCu: goto label_125cfc;
            case 0x125D00u: goto label_125d00;
            case 0x125D04u: goto label_125d04;
            case 0x125D08u: goto label_125d08;
            case 0x125D0Cu: goto label_125d0c;
            case 0x125D10u: goto label_125d10;
            case 0x125D14u: goto label_125d14;
            case 0x125D18u: goto label_125d18;
            case 0x125D1Cu: goto label_125d1c;
            case 0x125D20u: goto label_125d20;
            case 0x125D24u: goto label_125d24;
            case 0x125D28u: goto label_125d28;
            case 0x125D2Cu: goto label_125d2c;
            case 0x125D30u: goto label_125d30;
            case 0x125D34u: goto label_125d34;
            case 0x125D38u: goto label_125d38;
            case 0x125D3Cu: goto label_125d3c;
            case 0x125D40u: goto label_125d40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125BECu; }
            if (ctx->pc != 0x125BECu) { return; }
        }
    }
    ctx->pc = 0x125BECu;
label_125bec:
    // 0x125bec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125bf0:
    // 0x125bf0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x125bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_125bf4:
    // 0x125bf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125bf8:
    // 0x125bf8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x125bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_125bfc:
    // 0x125bfc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C00u;
            // 0x125c00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    {
        const bool branch_taken_0x125bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BFCu;
            // 0x125c00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bfc) {
            ctx->pc = 0x125BA0u;
            goto label_125ba0;
        }
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0x10000009  b           . + 4 + (0x9 << 2)
label_125c08:
    if (ctx->pc == 0x125C08u) {
        ctx->pc = 0x125C08u;
            // 0x125c08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125C0Cu;
        goto label_125c0c;
    }
    ctx->pc = 0x125C04u;
    {
        const bool branch_taken_0x125c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C04u;
            // 0x125c08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c04) {
            ctx->pc = 0x125C2Cu;
            goto label_125c2c;
        }
    }
    ctx->pc = 0x125C0Cu;
label_125c0c:
    // 0x125c0c: 0x268206c0  addiu       $v0, $s4, 0x6C0
    ctx->pc = 0x125c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_125c10:
    // 0x125c10: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_125c14:
    // 0x125c14: 0x10000004  b           . + 4 + (0x4 << 2)
label_125c18:
    if (ctx->pc == 0x125C18u) {
        ctx->pc = 0x125C18u;
            // 0x125c18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x125C1Cu;
        goto label_125c1c;
    }
    ctx->pc = 0x125C14u;
    {
        const bool branch_taken_0x125c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C14u;
            // 0x125c18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c14) {
            ctx->pc = 0x125C28u;
            goto label_125c28;
        }
    }
    ctx->pc = 0x125C1Cu;
label_125c1c:
    // 0x125c1c: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_125c20:
    // 0x125c20: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_125c24:
    // 0x125c24: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x125c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_125c28:
    // 0x125c28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x125c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125c2c:
    // 0x125c2c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_125c30:
    // 0x125c30: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x125c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_125c34:
    // 0x125c34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x125c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125c38:
    // 0x125c38: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_125c3c:
    // 0x125c3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125c40:
    // 0x125c40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_125c44:
    if (ctx->pc == 0x125C44u) {
        ctx->pc = 0x125C44u;
            // 0x125c44: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->pc = 0x125C48u;
        goto label_125c48;
    }
    ctx->pc = 0x125C40u;
    {
        const bool branch_taken_0x125c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C40u;
            // 0x125c44: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c40) {
            ctx->pc = 0x125C60u;
            goto label_125c60;
        }
    }
    ctx->pc = 0x125C48u;
label_125c48:
    // 0x125c48: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x125c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_125c4c:
    // 0x125c4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_125c50:
    if (ctx->pc == 0x125C50u) {
        ctx->pc = 0x125C50u;
            // 0x125c50: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x125C54u;
        goto label_125c54;
    }
    ctx->pc = 0x125C4Cu;
    {
        const bool branch_taken_0x125c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C4Cu;
            // 0x125c50: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c4c) {
            ctx->pc = 0x125C60u;
            goto label_125c60;
        }
    }
    ctx->pc = 0x125C54u;
label_125c54:
    // 0x125c54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_125c58:
    // 0x125c58: 0xc04b01e  jal         func_12C078
label_125c5c:
    if (ctx->pc == 0x125C5Cu) {
        ctx->pc = 0x125C5Cu;
            // 0x125c5c: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
        ctx->pc = 0x125C60u;
        goto label_125c60;
    }
    ctx->pc = 0x125C58u;
    SET_GPR_U32(ctx, 31, 0x125C60u);
    ctx->pc = 0x125C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125C58u;
            // 0x125c5c: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125C60u; }
        if (ctx->pc != 0x125C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125C60u; }
        if (ctx->pc != 0x125C60u) { return; }
    }
    ctx->pc = 0x125C60u;
label_125c60:
    // 0x125c60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x125c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125c64:
    // 0x125c64: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x125c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_125c68:
    // 0x125c68: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x125c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_125c6c:
    // 0x125c6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x125c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125c70:
    // 0x125c70: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x125c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_125c74:
    // 0x125c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125c78:
    // 0x125c78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_125c7c:
    if (ctx->pc == 0x125C7Cu) {
        ctx->pc = 0x125C7Cu;
            // 0x125c7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->pc = 0x125C80u;
        goto label_125c80;
    }
    ctx->pc = 0x125C78u;
    {
        const bool branch_taken_0x125c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C78u;
            // 0x125c7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c78) {
            ctx->pc = 0x125CC0u;
            goto label_125cc0;
        }
    }
    ctx->pc = 0x125C80u;
label_125c80:
    // 0x125c80: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_125c84:
    // 0x125c84: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_125c88:
    // 0x125c88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125c8c:
    // 0x125c8c: 0x8c650594  lw          $a1, 0x594($v1)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_125c90:
    // 0x125c90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x125c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_125c94:
    // 0x125c94: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x125c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125c98:
    // 0x125c98: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x125c98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_125c9c:
    // 0x125c9c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x125c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125ca0:
    // 0x125ca0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x125ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_125ca4:
    // 0x125ca4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x125ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125ca8:
    // 0x125ca8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x125ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125cac:
    // 0x125cac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125cb0:
    // 0x125cb0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x125cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125cb4:
    // 0x125cb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125cb8:
    // 0x125cb8: 0x8049aa6  j           func_126A98
label_125cbc:
    if (ctx->pc == 0x125CBCu) {
        ctx->pc = 0x125CBCu;
            // 0x125cbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x125CC0u;
        goto label_125cc0;
    }
    ctx->pc = 0x125CB8u;
    ctx->pc = 0x125CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125CB8u;
            // 0x125cbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126A98u;
    if (runtime->hasFunction(0x126A98u)) {
        auto targetFn = runtime->lookupFunction(0x126A98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyRefImage_0x126a98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x125CC0u;
label_125cc0:
    // 0x125cc0: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_125cc4:
    // 0x125cc4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_125cc8:
    if (ctx->pc == 0x125CC8u) {
        ctx->pc = 0x125CC8u;
            // 0x125cc8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->pc = 0x125CCCu;
        goto label_125ccc;
    }
    ctx->pc = 0x125CC4u;
    {
        const bool branch_taken_0x125cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125CC4u;
            // 0x125cc8: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cc4) {
            ctx->pc = 0x125D04u;
            goto label_125d04;
        }
    }
    ctx->pc = 0x125CCCu;
label_125ccc:
    // 0x125ccc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x125cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_125cd0:
    // 0x125cd0: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_125cd4:
    // 0x125cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125cd8:
    // 0x125cd8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x125cd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125cdc:
    // 0x125cdc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x125cdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_125ce0:
    // 0x125ce0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x125ce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125ce4:
    // 0x125ce4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x125ce4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_125ce8:
    // 0x125ce8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x125ce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125cec:
    // 0x125cec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x125cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125cf0:
    // 0x125cf0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125cf4:
    // 0x125cf4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x125cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125cf8:
    // 0x125cf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125cfc:
    // 0x125cfc: 0x8049aa6  j           func_126A98
label_125d00:
    if (ctx->pc == 0x125D00u) {
        ctx->pc = 0x125D00u;
            // 0x125d00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x125D04u;
        goto label_125d04;
    }
    ctx->pc = 0x125CFCu;
    ctx->pc = 0x125D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125CFCu;
            // 0x125d00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126A98u;
    if (runtime->hasFunction(0x126A98u)) {
        auto targetFn = runtime->lookupFunction(0x126A98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyRefImage_0x126a98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x125D04u;
label_125d04:
    // 0x125d04: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_125d08:
    // 0x125d08: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_125d0c:
    // 0x125d0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x125d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125d10:
    // 0x125d10: 0x8c660594  lw          $a2, 0x594($v1)
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_125d14:
    // 0x125d14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x125d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_125d18:
    // 0x125d18: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x125d18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125d1c:
    // 0x125d1c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x125d1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_125d20:
    // 0x125d20: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x125d20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125d24:
    // 0x125d24: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x125d24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_125d28:
    // 0x125d28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x125d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_125d2c:
    // 0x125d2c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x125d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_125d30:
    // 0x125d30: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125d34:
    // 0x125d34: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x125d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125d38:
    // 0x125d38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125d3c:
    // 0x125d3c: 0x8049a8e  j           func_126A38
label_125d40:
    if (ctx->pc == 0x125D40u) {
        ctx->pc = 0x125D40u;
            // 0x125d40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x125D44u;
        goto label_fallthrough_0x125d3c;
    }
    ctx->pc = 0x125D3Cu;
    ctx->pc = 0x125D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D3Cu;
            // 0x125d40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126A38u;
    if (runtime->hasFunction(0x126A38u)) {
        auto targetFn = runtime->lookupFunction(0x126A38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _copyAddRefImage_0x126a38(rdram, ctx, runtime); return;
    }
label_fallthrough_0x125d3c:
    ctx->pc = 0x125D44u;
}
