#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readMpeg
// Address: 0x118c18 - 0x118e2c
void readMpeg_0x118c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118c18u;

label_118c18:
    // 0x118c18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x118c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_118c1c:
    // 0x118c1c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x118c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_118c20:
    // 0x118c20: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x118c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_118c24:
    // 0x118c24: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x118c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_118c28:
    // 0x118c28: 0x3c1e0075  lui         $fp, 0x75
    ctx->pc = 0x118c28u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
label_118c2c:
    // 0x118c2c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x118c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_118c30:
    // 0x118c30: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x118c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_118c34:
    // 0x118c34: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x118c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_118c38:
    // 0x118c38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x118c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_118c3c:
    // 0x118c3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118c40:
    // 0x118c40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x118c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_118c44:
    // 0x118c44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x118c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_118c48:
    // 0x118c48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x118c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_118c4c:
    // 0x118c4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x118c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_118c50:
    // 0x118c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118c54:
    // 0x118c54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x118c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_118c58:
    // 0x118c58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_118c5c:
    // 0x118c5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x118c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_118c60:
    // 0x118c60: 0x202b821  addu        $s7, $s0, $v0
    ctx->pc = 0x118c60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_118c64:
    // 0x118c64: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x118c64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_118c68:
    // 0x118c68: 0x1000003f  b           . + 4 + (0x3F << 2)
label_118c6c:
    if (ctx->pc == 0x118C6Cu) {
        ctx->pc = 0x118C6Cu;
            // 0x118c6c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118C70u;
        goto label_118c70;
    }
    ctx->pc = 0x118C68u;
    {
        const bool branch_taken_0x118c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C68u;
            // 0x118c6c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c68) {
            ctx->pc = 0x118D68u;
            goto label_118d68;
        }
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x118c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_118c74:
    // 0x118c74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_118c78:
    if (ctx->pc == 0x118C78u) {
        ctx->pc = 0x118C78u;
            // 0x118c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118C7Cu;
        goto label_118c7c;
    }
    ctx->pc = 0x118C74u;
    {
        const bool branch_taken_0x118c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C74u;
            // 0x118c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c74) {
            ctx->pc = 0x118C98u;
            goto label_118c98;
        }
    }
    ctx->pc = 0x118C7Cu;
label_118c7c:
    // 0x118c7c: 0x2c0f809  jalr        $s6
label_118c80:
    if (ctx->pc == 0x118C80u) {
        ctx->pc = 0x118C84u;
        goto label_118c84;
    }
    ctx->pc = 0x118C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x118C84u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C18u: goto label_118c18;
            case 0x118C1Cu: goto label_118c1c;
            case 0x118C20u: goto label_118c20;
            case 0x118C24u: goto label_118c24;
            case 0x118C28u: goto label_118c28;
            case 0x118C2Cu: goto label_118c2c;
            case 0x118C30u: goto label_118c30;
            case 0x118C34u: goto label_118c34;
            case 0x118C38u: goto label_118c38;
            case 0x118C3Cu: goto label_118c3c;
            case 0x118C40u: goto label_118c40;
            case 0x118C44u: goto label_118c44;
            case 0x118C48u: goto label_118c48;
            case 0x118C4Cu: goto label_118c4c;
            case 0x118C50u: goto label_118c50;
            case 0x118C54u: goto label_118c54;
            case 0x118C58u: goto label_118c58;
            case 0x118C5Cu: goto label_118c5c;
            case 0x118C60u: goto label_118c60;
            case 0x118C64u: goto label_118c64;
            case 0x118C68u: goto label_118c68;
            case 0x118C6Cu: goto label_118c6c;
            case 0x118C70u: goto label_118c70;
            case 0x118C74u: goto label_118c74;
            case 0x118C78u: goto label_118c78;
            case 0x118C7Cu: goto label_118c7c;
            case 0x118C80u: goto label_118c80;
            case 0x118C84u: goto label_118c84;
            case 0x118C88u: goto label_118c88;
            case 0x118C8Cu: goto label_118c8c;
            case 0x118C90u: goto label_118c90;
            case 0x118C94u: goto label_118c94;
            case 0x118C98u: goto label_118c98;
            case 0x118C9Cu: goto label_118c9c;
            case 0x118CA0u: goto label_118ca0;
            case 0x118CA4u: goto label_118ca4;
            case 0x118CA8u: goto label_118ca8;
            case 0x118CACu: goto label_118cac;
            case 0x118CB0u: goto label_118cb0;
            case 0x118CB4u: goto label_118cb4;
            case 0x118CB8u: goto label_118cb8;
            case 0x118CBCu: goto label_118cbc;
            case 0x118CC0u: goto label_118cc0;
            case 0x118CC4u: goto label_118cc4;
            case 0x118CC8u: goto label_118cc8;
            case 0x118CCCu: goto label_118ccc;
            case 0x118CD0u: goto label_118cd0;
            case 0x118CD4u: goto label_118cd4;
            case 0x118CD8u: goto label_118cd8;
            case 0x118CDCu: goto label_118cdc;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE4u: goto label_118ce4;
            case 0x118CE8u: goto label_118ce8;
            case 0x118CECu: goto label_118cec;
            case 0x118CF0u: goto label_118cf0;
            case 0x118CF4u: goto label_118cf4;
            case 0x118CF8u: goto label_118cf8;
            case 0x118CFCu: goto label_118cfc;
            case 0x118D00u: goto label_118d00;
            case 0x118D04u: goto label_118d04;
            case 0x118D08u: goto label_118d08;
            case 0x118D0Cu: goto label_118d0c;
            case 0x118D10u: goto label_118d10;
            case 0x118D14u: goto label_118d14;
            case 0x118D18u: goto label_118d18;
            case 0x118D1Cu: goto label_118d1c;
            case 0x118D20u: goto label_118d20;
            case 0x118D24u: goto label_118d24;
            case 0x118D28u: goto label_118d28;
            case 0x118D2Cu: goto label_118d2c;
            case 0x118D30u: goto label_118d30;
            case 0x118D34u: goto label_118d34;
            case 0x118D38u: goto label_118d38;
            case 0x118D3Cu: goto label_118d3c;
            case 0x118D40u: goto label_118d40;
            case 0x118D44u: goto label_118d44;
            case 0x118D48u: goto label_118d48;
            case 0x118D4Cu: goto label_118d4c;
            case 0x118D50u: goto label_118d50;
            case 0x118D54u: goto label_118d54;
            case 0x118D58u: goto label_118d58;
            case 0x118D5Cu: goto label_118d5c;
            case 0x118D60u: goto label_118d60;
            case 0x118D64u: goto label_118d64;
            case 0x118D68u: goto label_118d68;
            case 0x118D6Cu: goto label_118d6c;
            case 0x118D70u: goto label_118d70;
            case 0x118D74u: goto label_118d74;
            case 0x118D78u: goto label_118d78;
            case 0x118D7Cu: goto label_118d7c;
            case 0x118D80u: goto label_118d80;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118D8Cu: goto label_118d8c;
            case 0x118D90u: goto label_118d90;
            case 0x118D94u: goto label_118d94;
            case 0x118D98u: goto label_118d98;
            case 0x118D9Cu: goto label_118d9c;
            case 0x118DA0u: goto label_118da0;
            case 0x118DA4u: goto label_118da4;
            case 0x118DA8u: goto label_118da8;
            case 0x118DACu: goto label_118dac;
            case 0x118DB0u: goto label_118db0;
            case 0x118DB4u: goto label_118db4;
            case 0x118DB8u: goto label_118db8;
            case 0x118DBCu: goto label_118dbc;
            case 0x118DC0u: goto label_118dc0;
            case 0x118DC4u: goto label_118dc4;
            case 0x118DC8u: goto label_118dc8;
            case 0x118DCCu: goto label_118dcc;
            case 0x118DD0u: goto label_118dd0;
            case 0x118DD4u: goto label_118dd4;
            case 0x118DD8u: goto label_118dd8;
            case 0x118DDCu: goto label_118ddc;
            case 0x118DE0u: goto label_118de0;
            case 0x118DE4u: goto label_118de4;
            case 0x118DE8u: goto label_118de8;
            case 0x118DECu: goto label_118dec;
            case 0x118DF0u: goto label_118df0;
            case 0x118DF4u: goto label_118df4;
            case 0x118DF8u: goto label_118df8;
            case 0x118DFCu: goto label_118dfc;
            case 0x118E00u: goto label_118e00;
            case 0x118E04u: goto label_118e04;
            case 0x118E08u: goto label_118e08;
            case 0x118E0Cu: goto label_118e0c;
            case 0x118E10u: goto label_118e10;
            case 0x118E14u: goto label_118e14;
            case 0x118E18u: goto label_118e18;
            case 0x118E1Cu: goto label_118e1c;
            case 0x118E20u: goto label_118e20;
            case 0x118E24u: goto label_118e24;
            case 0x118E28u: goto label_118e28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x118C84u; }
            if (ctx->pc != 0x118C84u) { return; }
        }
    }
    ctx->pc = 0x118C84u;
label_118c84:
    // 0x118c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_118c88:
    if (ctx->pc == 0x118C88u) {
        ctx->pc = 0x118C88u;
            // 0x118c88: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->pc = 0x118C8Cu;
        goto label_118c8c;
    }
    ctx->pc = 0x118C84u;
    {
        const bool branch_taken_0x118c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C84u;
            // 0x118c88: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c84) {
            ctx->pc = 0x118C94u;
            goto label_118c94;
        }
    }
    ctx->pc = 0x118C8Cu;
label_118c8c:
    // 0x118c8c: 0xc04684c  jal         func_11A130
label_118c90:
    if (ctx->pc == 0x118C90u) {
        ctx->pc = 0x118C90u;
            // 0x118c90: 0x2444e5c8  addiu       $a0, $v0, -0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960584));
        ctx->pc = 0x118C94u;
        goto label_118c94;
    }
    ctx->pc = 0x118C8Cu;
    SET_GPR_U32(ctx, 31, 0x118C94u);
    ctx->pc = 0x118C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118C8Cu;
            // 0x118c90: 0x2444e5c8  addiu       $a0, $v0, -0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A130u;
    if (runtime->hasFunction(0x11A130u)) {
        auto targetFn = runtime->lookupFunction(0x11A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C94u; }
        if (ctx->pc != 0x118C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecAbort_0x11a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C94u; }
        if (ctx->pc != 0x118C94u) { return; }
    }
    ctx->pc = 0x118C94u;
label_118c94:
    // 0x118c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118c98:
    // 0x118c98: 0xc04655e  jal         func_119578
label_118c9c:
    if (ctx->pc == 0x118C9Cu) {
        ctx->pc = 0x118C9Cu;
            // 0x118c9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118CA0u;
        goto label_118ca0;
    }
    ctx->pc = 0x118C98u;
    SET_GPR_U32(ctx, 31, 0x118CA0u);
    ctx->pc = 0x118C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118C98u;
            // 0x118c9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119578u;
    if (runtime->hasFunction(0x119578u)) {
        auto targetFn = runtime->lookupFunction(0x119578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CA0u; }
        if (ctx->pc != 0x118CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginPut_0x119578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CA0u; }
        if (ctx->pc != 0x118CA0u) { return; }
    }
    ctx->pc = 0x118CA0u;
label_118ca0:
    // 0x118ca0: 0x1a60000c  blez        $s3, . + 4 + (0xC << 2)
label_118ca4:
    if (ctx->pc == 0x118CA4u) {
        ctx->pc = 0x118CA4u;
            // 0x118ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118CA8u;
        goto label_118ca8;
    }
    ctx->pc = 0x118CA0u;
    {
        const bool branch_taken_0x118ca0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x118CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CA0u;
            // 0x118ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ca0) {
            ctx->pc = 0x118CD4u;
            goto label_118cd4;
        }
    }
    ctx->pc = 0x118CA8u;
label_118ca8:
    // 0x118ca8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x118ca8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
label_118cac:
    // 0x118cac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x118cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_118cb0:
    // 0x118cb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_118cb4:
    if (ctx->pc == 0x118CB4u) {
        ctx->pc = 0x118CB4u;
            // 0x118cb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x118CB8u;
        goto label_118cb8;
    }
    ctx->pc = 0x118CB0u;
    {
        const bool branch_taken_0x118cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CB0u;
            // 0x118cb4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cb0) {
            ctx->pc = 0x118CD4u;
            goto label_118cd4;
        }
    }
    ctx->pc = 0x118CB8u;
label_118cb8:
    // 0x118cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_118cbc:
    // 0x118cbc: 0xc046fe2  jal         func_11BF88
label_118cc0:
    if (ctx->pc == 0x118CC0u) {
        ctx->pc = 0x118CC0u;
            // 0x118cc0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x118CC4u;
        goto label_118cc4;
    }
    ctx->pc = 0x118CBCu;
    SET_GPR_U32(ctx, 31, 0x118CC4u);
    ctx->pc = 0x118CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118CBCu;
            // 0x118cc0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BF88u;
    if (runtime->hasFunction(0x11BF88u)) {
        auto targetFn = runtime->lookupFunction(0x11BF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CC4u; }
        if (ctx->pc != 0x118CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileRead_0x11bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CC4u; }
        if (ctx->pc != 0x118CC4u) { return; }
    }
    ctx->pc = 0x118CC4u;
label_118cc4:
    // 0x118cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118cc8:
    // 0x118cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118ccc:
    // 0x118ccc: 0xc04656a  jal         func_1195A8
label_118cd0:
    if (ctx->pc == 0x118CD0u) {
        ctx->pc = 0x118CD0u;
            // 0x118cd0: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x118CD4u;
        goto label_118cd4;
    }
    ctx->pc = 0x118CCCu;
    SET_GPR_U32(ctx, 31, 0x118CD4u);
    ctx->pc = 0x118CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118CCCu;
            // 0x118cd0: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1195A8u;
    if (runtime->hasFunction(0x1195A8u)) {
        auto targetFn = runtime->lookupFunction(0x1195A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CD4u; }
        if (ctx->pc != 0x118CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndPut_0x1195a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CD4u; }
        if (ctx->pc != 0x118CD4u) { return; }
    }
    ctx->pc = 0x118CD4u;
label_118cd4:
    // 0x118cd4: 0xc04638c  jal         func_118E30
label_118cd8:
    if (ctx->pc == 0x118CD8u) {
        ctx->pc = 0x118CDCu;
        goto label_118cdc;
    }
    ctx->pc = 0x118CD4u;
    SET_GPR_U32(ctx, 31, 0x118CDCu);
    ctx->pc = 0x118E30u;
    if (runtime->hasFunction(0x118E30u)) {
        auto targetFn = runtime->lookupFunction(0x118E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CDCu; }
        if (ctx->pc != 0x118CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CDCu; }
        if (ctx->pc != 0x118CDCu) { return; }
    }
    ctx->pc = 0x118CDCu;
label_118cdc:
    // 0x118cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118ce0:
    // 0x118ce0: 0xc04657c  jal         func_1195F0
label_118ce4:
    if (ctx->pc == 0x118CE4u) {
        ctx->pc = 0x118CE4u;
            // 0x118ce4: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x118CE8u;
        goto label_118ce8;
    }
    ctx->pc = 0x118CE0u;
    SET_GPR_U32(ctx, 31, 0x118CE8u);
    ctx->pc = 0x118CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118CE0u;
            // 0x118ce4: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1195F0u;
    if (runtime->hasFunction(0x1195F0u)) {
        auto targetFn = runtime->lookupFunction(0x1195F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CE8u; }
        if (ctx->pc != 0x118CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginGet_0x1195f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CE8u; }
        if (ctx->pc != 0x118CE8u) { return; }
    }
    ctx->pc = 0x118CE8u;
label_118ce8:
    // 0x118ce8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_118cec:
    if (ctx->pc == 0x118CECu) {
        ctx->pc = 0x118CECu;
            // 0x118cec: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x118CF0u;
        goto label_118cf0;
    }
    ctx->pc = 0x118CE8u;
    {
        const bool branch_taken_0x118ce8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x118CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118CE8u;
            // 0x118cec: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ce8) {
            ctx->pc = 0x118D14u;
            goto label_118d14;
        }
    }
    ctx->pc = 0x118CF0u;
label_118cf0:
    // 0x118cf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x118cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118cf4:
    // 0x118cf4: 0x8ee80008  lw          $t0, 0x8($s7)
    ctx->pc = 0x118cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_118cf8:
    // 0x118cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_118cfc:
    // 0x118cfc: 0xc0479c2  jal         func_11E708
label_118d00:
    if (ctx->pc == 0x118D00u) {
        ctx->pc = 0x118D00u;
            // 0x118d00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118D04u;
        goto label_118d04;
    }
    ctx->pc = 0x118CFCu;
    SET_GPR_U32(ctx, 31, 0x118D04u);
    ctx->pc = 0x118D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118CFCu;
            // 0x118d00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E708u;
    if (runtime->hasFunction(0x11E708u)) {
        auto targetFn = runtime->lookupFunction(0x11E708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D04u; }
        if (ctx->pc != 0x118D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDemuxPssRing_0x11e708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D04u; }
        if (ctx->pc != 0x118D04u) { return; }
    }
    ctx->pc = 0x118D04u;
label_118d04:
    // 0x118d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118d08:
    // 0x118d08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118d0c:
    // 0x118d0c: 0xc04658e  jal         func_119638
label_118d10:
    if (ctx->pc == 0x118D10u) {
        ctx->pc = 0x118D10u;
            // 0x118d10: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x118D14u;
        goto label_118d14;
    }
    ctx->pc = 0x118D0Cu;
    SET_GPR_U32(ctx, 31, 0x118D14u);
    ctx->pc = 0x118D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D0Cu;
            // 0x118d10: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119638u;
    if (runtime->hasFunction(0x119638u)) {
        auto targetFn = runtime->lookupFunction(0x119638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D14u; }
        if (ctx->pc != 0x118D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndGet_0x119638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D14u; }
        if (ctx->pc != 0x118D14u) { return; }
    }
    ctx->pc = 0x118D14u;
label_118d14:
    // 0x118d14: 0xc04647e  jal         func_1191F8
label_118d18:
    if (ctx->pc == 0x118D18u) {
        ctx->pc = 0x118D1Cu;
        goto label_118d1c;
    }
    ctx->pc = 0x118D14u;
    SET_GPR_U32(ctx, 31, 0x118D1Cu);
    ctx->pc = 0x1191F8u;
    if (runtime->hasFunction(0x1191F8u)) {
        auto targetFn = runtime->lookupFunction(0x1191F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D1Cu; }
        if (ctx->pc != 0x118D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        proceedAudio_0x1191f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D1Cu; }
        if (ctx->pc != 0x118D1Cu) { return; }
    }
    ctx->pc = 0x118D1Cu;
label_118d1c:
    // 0x118d1c: 0x16a00013  bnez        $s5, . + 4 + (0x13 << 2)
label_118d20:
    if (ctx->pc == 0x118D20u) {
        ctx->pc = 0x118D20u;
            // 0x118d20: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x118D24u;
        goto label_118d24;
    }
    ctx->pc = 0x118D1Cu;
    {
        const bool branch_taken_0x118d1c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x118D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D1Cu;
            // 0x118d20: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d1c) {
            ctx->pc = 0x118D6Cu;
            goto label_118d6c;
        }
    }
    ctx->pc = 0x118D24u;
label_118d24:
    // 0x118d24: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x118d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_118d28:
    // 0x118d28: 0xc046a4c  jal         func_11A930
label_118d2c:
    if (ctx->pc == 0x118D2Cu) {
        ctx->pc = 0x118D2Cu;
            // 0x118d2c: 0x2444e518  addiu       $a0, $v0, -0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960408));
        ctx->pc = 0x118D30u;
        goto label_118d30;
    }
    ctx->pc = 0x118D28u;
    SET_GPR_U32(ctx, 31, 0x118D30u);
    ctx->pc = 0x118D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D28u;
            // 0x118d2c: 0x2444e518  addiu       $a0, $v0, -0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A930u;
    if (runtime->hasFunction(0x11A930u)) {
        auto targetFn = runtime->lookupFunction(0x11A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D30u; }
        if (ctx->pc != 0x118D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x11a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D30u; }
        if (ctx->pc != 0x118D30u) { return; }
    }
    ctx->pc = 0x118D30u;
label_118d30:
    // 0x118d30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_118d34:
    if (ctx->pc == 0x118D34u) {
        ctx->pc = 0x118D34u;
            // 0x118d34: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x118D38u;
        goto label_118d38;
    }
    ctx->pc = 0x118D30u;
    {
        const bool branch_taken_0x118d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D30u;
            // 0x118d34: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d30) {
            ctx->pc = 0x118D6Cu;
            goto label_118d6c;
        }
    }
    ctx->pc = 0x118D38u;
label_118d38:
    // 0x118d38: 0xc04638e  jal         func_118E38
label_118d3c:
    if (ctx->pc == 0x118D3Cu) {
        ctx->pc = 0x118D40u;
        goto label_118d40;
    }
    ctx->pc = 0x118D38u;
    SET_GPR_U32(ctx, 31, 0x118D40u);
    ctx->pc = 0x118E38u;
    if (runtime->hasFunction(0x118E38u)) {
        auto targetFn = runtime->lookupFunction(0x118E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D40u; }
        if (ctx->pc != 0x118D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isAudioOK_0x118e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D40u; }
        if (ctx->pc != 0x118D40u) { return; }
    }
    ctx->pc = 0x118D40u;
label_118d40:
    // 0x118d40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_118d44:
    if (ctx->pc == 0x118D44u) {
        ctx->pc = 0x118D44u;
            // 0x118d44: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x118D48u;
        goto label_118d48;
    }
    ctx->pc = 0x118D40u;
    {
        const bool branch_taken_0x118d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D40u;
            // 0x118d44: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d40) {
            ctx->pc = 0x118D6Cu;
            goto label_118d6c;
        }
    }
    ctx->pc = 0x118D48u;
label_118d48:
    // 0x118d48: 0xc046f00  jal         func_11BC00
label_118d4c:
    if (ctx->pc == 0x118D4Cu) {
        ctx->pc = 0x118D4Cu;
            // 0x118d4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x118D50u;
        goto label_118d50;
    }
    ctx->pc = 0x118D48u;
    SET_GPR_U32(ctx, 31, 0x118D50u);
    ctx->pc = 0x118D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D48u;
            // 0x118d4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BC00u;
    if (runtime->hasFunction(0x11BC00u)) {
        auto targetFn = runtime->lookupFunction(0x11BC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D50u; }
        if (ctx->pc != 0x118D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        startDisplay_0x11bc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D50u; }
        if (ctx->pc != 0x118D50u) { return; }
    }
    ctx->pc = 0x118D50u;
label_118d50:
    // 0x118d50: 0x8f828410  lw          $v0, -0x7BF0($gp)
    ctx->pc = 0x118d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_118d54:
    // 0x118d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_118d58:
    if (ctx->pc == 0x118D58u) {
        ctx->pc = 0x118D58u;
            // 0x118d58: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x118D5Cu;
        goto label_118d5c;
    }
    ctx->pc = 0x118D54u;
    {
        const bool branch_taken_0x118d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D54u;
            // 0x118d58: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d54) {
            ctx->pc = 0x118D68u;
            goto label_118d68;
        }
    }
    ctx->pc = 0x118D5Cu;
label_118d5c:
    // 0x118d5c: 0xc046622  jal         func_119888
label_118d60:
    if (ctx->pc == 0x118D60u) {
        ctx->pc = 0x118D60u;
            // 0x118d60: 0x27c4e568  addiu       $a0, $fp, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960488));
        ctx->pc = 0x118D64u;
        goto label_118d64;
    }
    ctx->pc = 0x118D5Cu;
    SET_GPR_U32(ctx, 31, 0x118D64u);
    ctx->pc = 0x118D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D5Cu;
            // 0x118d60: 0x27c4e568  addiu       $a0, $fp, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119888u;
    if (runtime->hasFunction(0x119888u)) {
        auto targetFn = runtime->lookupFunction(0x119888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D64u; }
        if (ctx->pc != 0x118D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecStart_0x119888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D64u; }
        if (ctx->pc != 0x118D64u) { return; }
    }
    ctx->pc = 0x118D64u;
label_118d64:
    // 0x118d64: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x118d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118d68:
    // 0x118d68: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x118d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_118d6c:
    // 0x118d6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_118d70:
    if (ctx->pc == 0x118D70u) {
        ctx->pc = 0x118D74u;
        goto label_118d74;
    }
    ctx->pc = 0x118D6Cu;
    {
        const bool branch_taken_0x118d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d6c) {
            ctx->pc = 0x118D98u;
            goto label_118d98;
        }
    }
    ctx->pc = 0x118D74u;
label_118d74:
    // 0x118d74: 0xc046850  jal         func_11A140
label_118d78:
    if (ctx->pc == 0x118D78u) {
        ctx->pc = 0x118D78u;
            // 0x118d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118D7Cu;
        goto label_118d7c;
    }
    ctx->pc = 0x118D74u;
    SET_GPR_U32(ctx, 31, 0x118D7Cu);
    ctx->pc = 0x118D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D74u;
            // 0x118d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A140u;
    if (runtime->hasFunction(0x11A140u)) {
        auto targetFn = runtime->lookupFunction(0x11A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D7Cu; }
        if (ctx->pc != 0x118D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x11a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D7Cu; }
        if (ctx->pc != 0x118D7Cu) { return; }
    }
    ctx->pc = 0x118D7Cu;
label_118d7c:
    // 0x118d7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_118d80:
    // 0x118d80: 0x5443ffbb  bnel        $v0, $v1, . + 4 + (-0x45 << 2)
label_118d84:
    if (ctx->pc == 0x118D84u) {
        ctx->pc = 0x118D84u;
            // 0x118d84: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x118D88u;
        goto label_118d88;
    }
    ctx->pc = 0x118D80u;
    {
        const bool branch_taken_0x118d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x118d80) {
            ctx->pc = 0x118D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118D80u;
            // 0x118d84: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118C70u;
            goto label_118c70;
        }
    }
    ctx->pc = 0x118D88u;
label_118d88:
    // 0x118d88: 0x10000003  b           . + 4 + (0x3 << 2)
label_118d8c:
    if (ctx->pc == 0x118D8Cu) {
        ctx->pc = 0x118D90u;
        goto label_118d90;
    }
    ctx->pc = 0x118D88u;
    {
        const bool branch_taken_0x118d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118d88) {
            ctx->pc = 0x118D98u;
            goto label_118d98;
        }
    }
    ctx->pc = 0x118D90u;
label_118d90:
    // 0x118d90: 0xc04638c  jal         func_118E30
label_118d94:
    if (ctx->pc == 0x118D94u) {
        ctx->pc = 0x118D98u;
        goto label_118d98;
    }
    ctx->pc = 0x118D90u;
    SET_GPR_U32(ctx, 31, 0x118D98u);
    ctx->pc = 0x118E30u;
    if (runtime->hasFunction(0x118E30u)) {
        auto targetFn = runtime->lookupFunction(0x118E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D98u; }
        if (ctx->pc != 0x118D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D98u; }
        if (ctx->pc != 0x118D98u) { return; }
    }
    ctx->pc = 0x118D98u;
label_118d98:
    // 0x118d98: 0xc04687c  jal         func_11A1F0
label_118d9c:
    if (ctx->pc == 0x118D9Cu) {
        ctx->pc = 0x118D9Cu;
            // 0x118d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118DA0u;
        goto label_118da0;
    }
    ctx->pc = 0x118D98u;
    SET_GPR_U32(ctx, 31, 0x118DA0u);
    ctx->pc = 0x118D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118D98u;
            // 0x118d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A1F0u;
    if (runtime->hasFunction(0x11A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DA0u; }
        if (ctx->pc != 0x118DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecFlush_0x11a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DA0u; }
        if (ctx->pc != 0x118DA0u) { return; }
    }
    ctx->pc = 0x118DA0u;
label_118da0:
    // 0x118da0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_118da4:
    if (ctx->pc == 0x118DA4u) {
        ctx->pc = 0x118DA4u;
            // 0x118da4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x118DA8u;
        goto label_118da8;
    }
    ctx->pc = 0x118DA0u;
    {
        const bool branch_taken_0x118da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DA0u;
            // 0x118da4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118da0) {
            ctx->pc = 0x118D90u;
            goto label_118d90;
        }
    }
    ctx->pc = 0x118DA8u;
label_118da8:
    // 0x118da8: 0x10000003  b           . + 4 + (0x3 << 2)
label_118dac:
    if (ctx->pc == 0x118DACu) {
        ctx->pc = 0x118DB0u;
        goto label_118db0;
    }
    ctx->pc = 0x118DA8u;
    {
        const bool branch_taken_0x118da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118da8) {
            ctx->pc = 0x118DB8u;
            goto label_118db8;
        }
    }
    ctx->pc = 0x118DB0u;
label_118db0:
    // 0x118db0: 0xc04638c  jal         func_118E30
label_118db4:
    if (ctx->pc == 0x118DB4u) {
        ctx->pc = 0x118DB8u;
        goto label_118db8;
    }
    ctx->pc = 0x118DB0u;
    SET_GPR_U32(ctx, 31, 0x118DB8u);
    ctx->pc = 0x118E30u;
    if (runtime->hasFunction(0x118E30u)) {
        auto targetFn = runtime->lookupFunction(0x118E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DB8u; }
        if (ctx->pc != 0x118DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DB8u; }
        if (ctx->pc != 0x118DB8u) { return; }
    }
    ctx->pc = 0x118DB8u;
label_118db8:
    // 0x118db8: 0xc0468b0  jal         func_11A2C0
label_118dbc:
    if (ctx->pc == 0x118DBCu) {
        ctx->pc = 0x118DBCu;
            // 0x118dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118DC0u;
        goto label_118dc0;
    }
    ctx->pc = 0x118DB8u;
    SET_GPR_U32(ctx, 31, 0x118DC0u);
    ctx->pc = 0x118DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118DB8u;
            // 0x118dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A2C0u;
    if (runtime->hasFunction(0x11A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x11A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DC0u; }
        if (ctx->pc != 0x118DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecIsFlushed_0x11a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DC0u; }
        if (ctx->pc != 0x118DC0u) { return; }
    }
    ctx->pc = 0x118DC0u;
label_118dc0:
    // 0x118dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_118dc4:
    if (ctx->pc == 0x118DC4u) {
        ctx->pc = 0x118DC8u;
        goto label_118dc8;
    }
    ctx->pc = 0x118DC0u;
    {
        const bool branch_taken_0x118dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118dc0) {
            ctx->pc = 0x118DD8u;
            goto label_118dd8;
        }
    }
    ctx->pc = 0x118DC8u;
label_118dc8:
    // 0x118dc8: 0xc046850  jal         func_11A140
label_118dcc:
    if (ctx->pc == 0x118DCCu) {
        ctx->pc = 0x118DCCu;
            // 0x118dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118DD0u;
        goto label_118dd0;
    }
    ctx->pc = 0x118DC8u;
    SET_GPR_U32(ctx, 31, 0x118DD0u);
    ctx->pc = 0x118DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118DC8u;
            // 0x118dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A140u;
    if (runtime->hasFunction(0x11A140u)) {
        auto targetFn = runtime->lookupFunction(0x11A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DD0u; }
        if (ctx->pc != 0x118DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x11a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DD0u; }
        if (ctx->pc != 0x118DD0u) { return; }
    }
    ctx->pc = 0x118DD0u;
label_118dd0:
    // 0x118dd0: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
label_118dd4:
    if (ctx->pc == 0x118DD4u) {
        ctx->pc = 0x118DD8u;
        goto label_118dd8;
    }
    ctx->pc = 0x118DD0u;
    {
        const bool branch_taken_0x118dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x118dd0) {
            ctx->pc = 0x118DB0u;
            goto label_118db0;
        }
    }
    ctx->pc = 0x118DD8u;
label_118dd8:
    // 0x118dd8: 0xc046f10  jal         func_11BC40
label_118ddc:
    if (ctx->pc == 0x118DDCu) {
        ctx->pc = 0x118DE0u;
        goto label_118de0;
    }
    ctx->pc = 0x118DD8u;
    SET_GPR_U32(ctx, 31, 0x118DE0u);
    ctx->pc = 0x11BC40u;
    if (runtime->hasFunction(0x11BC40u)) {
        auto targetFn = runtime->lookupFunction(0x11BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DE0u; }
        if (ctx->pc != 0x118DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        endDisplay_0x11bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DE0u; }
        if (ctx->pc != 0x118DE0u) { return; }
    }
    ctx->pc = 0x118DE0u;
label_118de0:
    // 0x118de0: 0x8f828410  lw          $v0, -0x7BF0($gp)
    ctx->pc = 0x118de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_118de4:
    // 0x118de4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_118de8:
    if (ctx->pc == 0x118DE8u) {
        ctx->pc = 0x118DE8u;
            // 0x118de8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x118DECu;
        goto label_118dec;
    }
    ctx->pc = 0x118DE4u;
    {
        const bool branch_taken_0x118de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118DE4u;
            // 0x118de8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118de4) {
            ctx->pc = 0x118DFCu;
            goto label_118dfc;
        }
    }
    ctx->pc = 0x118DECu;
label_118dec:
    // 0x118dec: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x118decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_118df0:
    // 0x118df0: 0xc04662a  jal         func_1198A8
label_118df4:
    if (ctx->pc == 0x118DF4u) {
        ctx->pc = 0x118DF4u;
            // 0x118df4: 0x2484e568  addiu       $a0, $a0, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
        ctx->pc = 0x118DF8u;
        goto label_118df8;
    }
    ctx->pc = 0x118DF0u;
    SET_GPR_U32(ctx, 31, 0x118DF8u);
    ctx->pc = 0x118DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118DF0u;
            // 0x118df4: 0x2484e568  addiu       $a0, $a0, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1198A8u;
    if (runtime->hasFunction(0x1198A8u)) {
        auto targetFn = runtime->lookupFunction(0x1198A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DF8u; }
        if (ctx->pc != 0x118DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecReset_0x1198a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DF8u; }
        if (ctx->pc != 0x118DF8u) { return; }
    }
    ctx->pc = 0x118DF8u;
label_118df8:
    // 0x118df8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x118df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_118dfc:
    // 0x118dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118e00:
    // 0x118e00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x118e00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_118e04:
    // 0x118e04: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x118e04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_118e08:
    // 0x118e08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x118e08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_118e0c:
    // 0x118e0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x118e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_118e10:
    // 0x118e10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_118e14:
    // 0x118e14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x118e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_118e18:
    // 0x118e18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x118e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_118e1c:
    // 0x118e1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x118e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118e20:
    // 0x118e20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118e24:
    // 0x118e24: 0x3e00008  jr          $ra
label_118e28:
    if (ctx->pc == 0x118E28u) {
        ctx->pc = 0x118E28u;
            // 0x118e28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x118E2Cu;
        goto label_fallthrough_0x118e24;
    }
    ctx->pc = 0x118E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E24u;
            // 0x118e28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C18u: goto label_118c18;
            case 0x118C1Cu: goto label_118c1c;
            case 0x118C20u: goto label_118c20;
            case 0x118C24u: goto label_118c24;
            case 0x118C28u: goto label_118c28;
            case 0x118C2Cu: goto label_118c2c;
            case 0x118C30u: goto label_118c30;
            case 0x118C34u: goto label_118c34;
            case 0x118C38u: goto label_118c38;
            case 0x118C3Cu: goto label_118c3c;
            case 0x118C40u: goto label_118c40;
            case 0x118C44u: goto label_118c44;
            case 0x118C48u: goto label_118c48;
            case 0x118C4Cu: goto label_118c4c;
            case 0x118C50u: goto label_118c50;
            case 0x118C54u: goto label_118c54;
            case 0x118C58u: goto label_118c58;
            case 0x118C5Cu: goto label_118c5c;
            case 0x118C60u: goto label_118c60;
            case 0x118C64u: goto label_118c64;
            case 0x118C68u: goto label_118c68;
            case 0x118C6Cu: goto label_118c6c;
            case 0x118C70u: goto label_118c70;
            case 0x118C74u: goto label_118c74;
            case 0x118C78u: goto label_118c78;
            case 0x118C7Cu: goto label_118c7c;
            case 0x118C80u: goto label_118c80;
            case 0x118C84u: goto label_118c84;
            case 0x118C88u: goto label_118c88;
            case 0x118C8Cu: goto label_118c8c;
            case 0x118C90u: goto label_118c90;
            case 0x118C94u: goto label_118c94;
            case 0x118C98u: goto label_118c98;
            case 0x118C9Cu: goto label_118c9c;
            case 0x118CA0u: goto label_118ca0;
            case 0x118CA4u: goto label_118ca4;
            case 0x118CA8u: goto label_118ca8;
            case 0x118CACu: goto label_118cac;
            case 0x118CB0u: goto label_118cb0;
            case 0x118CB4u: goto label_118cb4;
            case 0x118CB8u: goto label_118cb8;
            case 0x118CBCu: goto label_118cbc;
            case 0x118CC0u: goto label_118cc0;
            case 0x118CC4u: goto label_118cc4;
            case 0x118CC8u: goto label_118cc8;
            case 0x118CCCu: goto label_118ccc;
            case 0x118CD0u: goto label_118cd0;
            case 0x118CD4u: goto label_118cd4;
            case 0x118CD8u: goto label_118cd8;
            case 0x118CDCu: goto label_118cdc;
            case 0x118CE0u: goto label_118ce0;
            case 0x118CE4u: goto label_118ce4;
            case 0x118CE8u: goto label_118ce8;
            case 0x118CECu: goto label_118cec;
            case 0x118CF0u: goto label_118cf0;
            case 0x118CF4u: goto label_118cf4;
            case 0x118CF8u: goto label_118cf8;
            case 0x118CFCu: goto label_118cfc;
            case 0x118D00u: goto label_118d00;
            case 0x118D04u: goto label_118d04;
            case 0x118D08u: goto label_118d08;
            case 0x118D0Cu: goto label_118d0c;
            case 0x118D10u: goto label_118d10;
            case 0x118D14u: goto label_118d14;
            case 0x118D18u: goto label_118d18;
            case 0x118D1Cu: goto label_118d1c;
            case 0x118D20u: goto label_118d20;
            case 0x118D24u: goto label_118d24;
            case 0x118D28u: goto label_118d28;
            case 0x118D2Cu: goto label_118d2c;
            case 0x118D30u: goto label_118d30;
            case 0x118D34u: goto label_118d34;
            case 0x118D38u: goto label_118d38;
            case 0x118D3Cu: goto label_118d3c;
            case 0x118D40u: goto label_118d40;
            case 0x118D44u: goto label_118d44;
            case 0x118D48u: goto label_118d48;
            case 0x118D4Cu: goto label_118d4c;
            case 0x118D50u: goto label_118d50;
            case 0x118D54u: goto label_118d54;
            case 0x118D58u: goto label_118d58;
            case 0x118D5Cu: goto label_118d5c;
            case 0x118D60u: goto label_118d60;
            case 0x118D64u: goto label_118d64;
            case 0x118D68u: goto label_118d68;
            case 0x118D6Cu: goto label_118d6c;
            case 0x118D70u: goto label_118d70;
            case 0x118D74u: goto label_118d74;
            case 0x118D78u: goto label_118d78;
            case 0x118D7Cu: goto label_118d7c;
            case 0x118D80u: goto label_118d80;
            case 0x118D84u: goto label_118d84;
            case 0x118D88u: goto label_118d88;
            case 0x118D8Cu: goto label_118d8c;
            case 0x118D90u: goto label_118d90;
            case 0x118D94u: goto label_118d94;
            case 0x118D98u: goto label_118d98;
            case 0x118D9Cu: goto label_118d9c;
            case 0x118DA0u: goto label_118da0;
            case 0x118DA4u: goto label_118da4;
            case 0x118DA8u: goto label_118da8;
            case 0x118DACu: goto label_118dac;
            case 0x118DB0u: goto label_118db0;
            case 0x118DB4u: goto label_118db4;
            case 0x118DB8u: goto label_118db8;
            case 0x118DBCu: goto label_118dbc;
            case 0x118DC0u: goto label_118dc0;
            case 0x118DC4u: goto label_118dc4;
            case 0x118DC8u: goto label_118dc8;
            case 0x118DCCu: goto label_118dcc;
            case 0x118DD0u: goto label_118dd0;
            case 0x118DD4u: goto label_118dd4;
            case 0x118DD8u: goto label_118dd8;
            case 0x118DDCu: goto label_118ddc;
            case 0x118DE0u: goto label_118de0;
            case 0x118DE4u: goto label_118de4;
            case 0x118DE8u: goto label_118de8;
            case 0x118DECu: goto label_118dec;
            case 0x118DF0u: goto label_118df0;
            case 0x118DF4u: goto label_118df4;
            case 0x118DF8u: goto label_118df8;
            case 0x118DFCu: goto label_118dfc;
            case 0x118E00u: goto label_118e00;
            case 0x118E04u: goto label_118e04;
            case 0x118E08u: goto label_118e08;
            case 0x118E0Cu: goto label_118e0c;
            case 0x118E10u: goto label_118e10;
            case 0x118E14u: goto label_118e14;
            case 0x118E18u: goto label_118e18;
            case 0x118E1Cu: goto label_118e1c;
            case 0x118E20u: goto label_118e20;
            case 0x118E24u: goto label_118e24;
            case 0x118E28u: goto label_118e28;
            default: break;
        }
        return;
    }
label_fallthrough_0x118e24:
    ctx->pc = 0x118E2Cu;
}
