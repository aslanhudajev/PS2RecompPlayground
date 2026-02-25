#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_trees_dynamic
// Address: 0x1f0e8c - 0x1f1074
void inflate_trees_dynamic_0x1f0e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_trees_dynamic_0x1f0e8c");
#endif

    ctx->pc = 0x1f0e8cu;

label_1f0e8c:
    // 0x1f0e8c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f0e90:
    // 0x1f0e90: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f0e94:
    // 0x1f0e94: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1f0e98:
    // 0x1f0e98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f0e9c:
    // 0x1f0e9c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1f0ea0:
    // 0x1f0ea0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f0ea4:
    // 0x1f0ea4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1f0ea8:
    // 0x1f0ea8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1f0ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1f0eac:
    // 0x1f0eac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1f0eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1f0eb0:
    // 0x1f0eb0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1f0eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1f0eb4:
    // 0x1f0eb4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1f0eb8:
    // 0x1f0eb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f0eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ebc:
    // 0x1f0ebc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f0ebcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ec0:
    // 0x1f0ec0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f0ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ec4:
    // 0x1f0ec4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f0ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ec8:
    // 0x1f0ec8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f0ec8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ecc:
    // 0x1f0ecc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1f0eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ed0:
    // 0x1f0ed0: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x1f0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
label_1f0ed4:
    // 0x1f0ed4: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1f0ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ed8:
    // 0x1f0ed8: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x1f0ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0edc:
    // 0x1f0edc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1f0ee0:
    // 0x1f0ee0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1f0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1f0ee4:
    // 0x1f0ee4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0ee8:
    // 0x1f0ee8: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_1f0eec:
    // 0x1f0eec: 0x40f809  jalr        $v0
label_1f0ef0:
    if (ctx->pc == 0x1F0EF0u) {
        ctx->pc = 0x1F0EF0u;
            // 0x1f0ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F0EF4u;
        goto label_1f0ef4;
    }
    ctx->pc = 0x1F0EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0EF4u);
        ctx->pc = 0x1F0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EECu;
            // 0x1f0ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E8Cu: goto label_1f0e8c;
            case 0x1F0E90u: goto label_1f0e90;
            case 0x1F0E94u: goto label_1f0e94;
            case 0x1F0E98u: goto label_1f0e98;
            case 0x1F0E9Cu: goto label_1f0e9c;
            case 0x1F0EA0u: goto label_1f0ea0;
            case 0x1F0EA4u: goto label_1f0ea4;
            case 0x1F0EA8u: goto label_1f0ea8;
            case 0x1F0EACu: goto label_1f0eac;
            case 0x1F0EB0u: goto label_1f0eb0;
            case 0x1F0EB4u: goto label_1f0eb4;
            case 0x1F0EB8u: goto label_1f0eb8;
            case 0x1F0EBCu: goto label_1f0ebc;
            case 0x1F0EC0u: goto label_1f0ec0;
            case 0x1F0EC4u: goto label_1f0ec4;
            case 0x1F0EC8u: goto label_1f0ec8;
            case 0x1F0ECCu: goto label_1f0ecc;
            case 0x1F0ED0u: goto label_1f0ed0;
            case 0x1F0ED4u: goto label_1f0ed4;
            case 0x1F0ED8u: goto label_1f0ed8;
            case 0x1F0EDCu: goto label_1f0edc;
            case 0x1F0EE0u: goto label_1f0ee0;
            case 0x1F0EE4u: goto label_1f0ee4;
            case 0x1F0EE8u: goto label_1f0ee8;
            case 0x1F0EECu: goto label_1f0eec;
            case 0x1F0EF0u: goto label_1f0ef0;
            case 0x1F0EF4u: goto label_1f0ef4;
            case 0x1F0EF8u: goto label_1f0ef8;
            case 0x1F0EFCu: goto label_1f0efc;
            case 0x1F0F00u: goto label_1f0f00;
            case 0x1F0F04u: goto label_1f0f04;
            case 0x1F0F08u: goto label_1f0f08;
            case 0x1F0F0Cu: goto label_1f0f0c;
            case 0x1F0F10u: goto label_1f0f10;
            case 0x1F0F14u: goto label_1f0f14;
            case 0x1F0F18u: goto label_1f0f18;
            case 0x1F0F1Cu: goto label_1f0f1c;
            case 0x1F0F20u: goto label_1f0f20;
            case 0x1F0F24u: goto label_1f0f24;
            case 0x1F0F28u: goto label_1f0f28;
            case 0x1F0F2Cu: goto label_1f0f2c;
            case 0x1F0F30u: goto label_1f0f30;
            case 0x1F0F34u: goto label_1f0f34;
            case 0x1F0F38u: goto label_1f0f38;
            case 0x1F0F3Cu: goto label_1f0f3c;
            case 0x1F0F40u: goto label_1f0f40;
            case 0x1F0F44u: goto label_1f0f44;
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F50u: goto label_1f0f50;
            case 0x1F0F54u: goto label_1f0f54;
            case 0x1F0F58u: goto label_1f0f58;
            case 0x1F0F5Cu: goto label_1f0f5c;
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0EF4u; }
            if (ctx->pc != 0x1F0EF4u) { return; }
        }
    }
    ctx->pc = 0x1F0EF4u;
label_1f0ef4:
    // 0x1f0ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f0ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ef8:
    // 0x1f0ef8: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
label_1f0efc:
    if (ctx->pc == 0x1F0EFCu) {
        ctx->pc = 0x1F0EFCu;
            // 0x1f0efc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1F0F00u;
        goto label_1f0f00;
    }
    ctx->pc = 0x1F0EF8u;
    {
        const bool branch_taken_0x1f0ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0EF8u;
            // 0x1f0efc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ef8) {
            ctx->pc = 0x1F1044u;
            goto label_1f1044;
        }
    }
    ctx->pc = 0x1F0F00u;
label_1f0f00:
    // 0x1f0f00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f0f04:
    // 0x1f0f04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f0f08:
    // 0x1f0f08: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1f0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_1f0f0c:
    // 0x1f0f0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f0f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f10:
    // 0x1f0f10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f0f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f14:
    // 0x1f0f14: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x1f0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1f0f18:
    // 0x1f0f18: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f0f18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
label_1f0f1c:
    // 0x1f0f1c: 0x24e73248  addiu       $a3, $a3, 0x3248
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12872));
label_1f0f20:
    // 0x1f0f20: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
label_1f0f24:
    // 0x1f0f24: 0x250832c8  addiu       $t0, $t0, 0x32C8
    ctx->pc = 0x1f0f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13000));
label_1f0f28:
    // 0x1f0f28: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f0f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f2c:
    // 0x1f0f2c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1f0f2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f30:
    // 0x1f0f30: 0xc07c1ee  jal         func_1F07B8
label_1f0f34:
    if (ctx->pc == 0x1F0F34u) {
        ctx->pc = 0x1F0F34u;
            // 0x1f0f34: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F38u;
        goto label_1f0f38;
    }
    ctx->pc = 0x1F0F30u;
    SET_GPR_U32(ctx, 31, 0x1F0F38u);
    ctx->pc = 0x1F0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F30u;
            // 0x1f0f34: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F07B8u;
    if (runtime->hasFunction(0x1F07B8u)) {
        auto targetFn = runtime->lookupFunction(0x1F07B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F38u; }
        if (ctx->pc != 0x1F0F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x1f07b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F38u; }
        if (ctx->pc != 0x1F0F38u) { return; }
    }
    ctx->pc = 0x1F0F38u;
label_1f0f38:
    // 0x1f0f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f3c:
    // 0x1f0f3c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1f0f40:
    if (ctx->pc == 0x1F0F40u) {
        ctx->pc = 0x1F0F40u;
            // 0x1f0f40: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1F0F44u;
        goto label_1f0f44;
    }
    ctx->pc = 0x1F0F3Cu;
    {
        const bool branch_taken_0x1f0f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F3Cu;
            // 0x1f0f40: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f3c) {
            ctx->pc = 0x1F0F54u;
            goto label_1f0f54;
        }
    }
    ctx->pc = 0x1F0F44u;
label_1f0f44:
    // 0x1f0f44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f0f48:
    // 0x1f0f48: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1f0f4c:
    if (ctx->pc == 0x1F0F4Cu) {
        ctx->pc = 0x1F0F4Cu;
            // 0x1f0f4c: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x1F0F50u;
        goto label_1f0f50;
    }
    ctx->pc = 0x1F0F48u;
    {
        const bool branch_taken_0x1f0f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F48u;
            // 0x1f0f4c: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f48) {
            ctx->pc = 0x1F0F7Cu;
            goto label_1f0f7c;
        }
    }
    ctx->pc = 0x1F0F50u;
label_1f0f50:
    // 0x1f0f50: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f0f54:
    // 0x1f0f54: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1f0f58:
    if (ctx->pc == 0x1F0F58u) {
        ctx->pc = 0x1F0F58u;
            // 0x1f0f58: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1F0F5Cu;
        goto label_1f0f5c;
    }
    ctx->pc = 0x1F0F54u;
    {
        const bool branch_taken_0x1f0f54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F54u;
            // 0x1f0f58: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f54) {
            ctx->pc = 0x1F0F6Cu;
            goto label_1f0f6c;
        }
    }
    ctx->pc = 0x1F0F5Cu;
label_1f0f5c:
    // 0x1f0f5c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0f60:
    // 0x1f0f60: 0x24423488  addiu       $v0, $v0, 0x3488
    ctx->pc = 0x1f0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13448));
label_1f0f64:
    // 0x1f0f64: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1f0f68:
    if (ctx->pc == 0x1F0F68u) {
        ctx->pc = 0x1F0F68u;
            // 0x1f0f68: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0F6Cu;
        goto label_1f0f6c;
    }
    ctx->pc = 0x1F0F64u;
    {
        const bool branch_taken_0x1f0f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F64u;
            // 0x1f0f68: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f64) {
            ctx->pc = 0x1F101Cu;
            goto label_1f101c;
        }
    }
    ctx->pc = 0x1F0F6Cu;
label_1f0f6c:
    // 0x1f0f6c: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_1f0f70:
    if (ctx->pc == 0x1F0F70u) {
        ctx->pc = 0x1F0F70u;
            // 0x1f0f70: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1F0F74u;
        goto label_1f0f74;
    }
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F6Cu;
            // 0x1f0f70: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F101Cu;
            goto label_1f101c;
        }
    }
    ctx->pc = 0x1F0F74u;
label_1f0f74:
    // 0x1f0f74: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f0f78:
    if (ctx->pc == 0x1F0F78u) {
        ctx->pc = 0x1F0F78u;
            // 0x1f0f78: 0x244234b0  addiu       $v0, $v0, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13488));
        ctx->pc = 0x1F0F7Cu;
        goto label_1f0f7c;
    }
    ctx->pc = 0x1F0F74u;
    {
        const bool branch_taken_0x1f0f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0F74u;
            // 0x1f0f78: 0x244234b0  addiu       $v0, $v0, 0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f74) {
            ctx->pc = 0x1F1014u;
            goto label_1f1014;
        }
    }
    ctx->pc = 0x1F0F7Cu;
label_1f0f7c:
    // 0x1f0f7c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f0f80:
    // 0x1f0f80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f0f84:
    // 0x1f0f84: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1f0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_1f0f88:
    // 0x1f0f88: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1f0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1f0f8c:
    // 0x1f0f8c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f90:
    // 0x1f0f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0f94:
    // 0x1f0f94: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1f0f94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
label_1f0f98:
    // 0x1f0f98: 0x24e73348  addiu       $a3, $a3, 0x3348
    ctx->pc = 0x1f0f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13128));
label_1f0f9c:
    // 0x1f0f9c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1f0f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
label_1f0fa0:
    // 0x1f0fa0: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_1f0fa4:
    // 0x1f0fa4: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1f0fa8:
    // 0x1f0fa8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1f0fa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fac:
    // 0x1f0fac: 0xc07c1ee  jal         func_1F07B8
label_1f0fb0:
    if (ctx->pc == 0x1F0FB0u) {
        ctx->pc = 0x1F0FB0u;
            // 0x1f0fb0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FB4u;
        goto label_1f0fb4;
    }
    ctx->pc = 0x1F0FACu;
    SET_GPR_U32(ctx, 31, 0x1F0FB4u);
    ctx->pc = 0x1F0FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FACu;
            // 0x1f0fb0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F07B8u;
    if (runtime->hasFunction(0x1F07B8u)) {
        auto targetFn = runtime->lookupFunction(0x1F07B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FB4u; }
        if (ctx->pc != 0x1F0FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x1f07b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0FB4u; }
        if (ctx->pc != 0x1F0FB4u) { return; }
    }
    ctx->pc = 0x1F0FB4u;
label_1f0fb4:
    // 0x1f0fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0fb8:
    // 0x1f0fb8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_1f0fbc:
    if (ctx->pc == 0x1F0FBCu) {
        ctx->pc = 0x1F0FBCu;
            // 0x1f0fbc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1F0FC0u;
        goto label_1f0fc0;
    }
    ctx->pc = 0x1F0FB8u;
    {
        const bool branch_taken_0x1f0fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FB8u;
            // 0x1f0fbc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fb8) {
            ctx->pc = 0x1F0FDCu;
            goto label_1f0fdc;
        }
    }
    ctx->pc = 0x1F0FC0u;
label_1f0fc0:
    // 0x1f0fc0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1f0fc4:
    // 0x1f0fc4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_1f0fc8:
    if (ctx->pc == 0x1F0FC8u) {
        ctx->pc = 0x1F0FC8u;
            // 0x1f0fc8: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x1F0FCCu;
        goto label_1f0fcc;
    }
    ctx->pc = 0x1F0FC4u;
    {
        const bool branch_taken_0x1f0fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0fc4) {
            ctx->pc = 0x1F0FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FC4u;
            // 0x1f0fc8: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1034u;
            goto label_1f1034;
        }
    }
    ctx->pc = 0x1F0FCCu;
label_1f0fcc:
    // 0x1f0fcc: 0x2e620102  sltiu       $v0, $s3, 0x102
    ctx->pc = 0x1f0fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_1f0fd0:
    // 0x1f0fd0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_1f0fd4:
    if (ctx->pc == 0x1F0FD4u) {
        ctx->pc = 0x1F0FD4u;
            // 0x1f0fd4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x1F0FD8u;
        goto label_1f0fd8;
    }
    ctx->pc = 0x1F0FD0u;
    {
        const bool branch_taken_0x1f0fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0fd0) {
            ctx->pc = 0x1F0FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FD0u;
            // 0x1f0fd4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1034u;
            goto label_1f1034;
        }
    }
    ctx->pc = 0x1F0FD8u;
label_1f0fd8:
    // 0x1f0fd8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f0fdc:
    // 0x1f0fdc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1f0fe0:
    if (ctx->pc == 0x1F0FE0u) {
        ctx->pc = 0x1F0FE0u;
            // 0x1f0fe0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1F0FE4u;
        goto label_1f0fe4;
    }
    ctx->pc = 0x1F0FDCu;
    {
        const bool branch_taken_0x1f0fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FDCu;
            // 0x1f0fe0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fdc) {
            ctx->pc = 0x1F0FF4u;
            goto label_1f0ff4;
        }
    }
    ctx->pc = 0x1F0FE4u;
label_1f0fe4:
    // 0x1f0fe4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0fe8:
    // 0x1f0fe8: 0x244234d0  addiu       $v0, $v0, 0x34D0
    ctx->pc = 0x1f0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13520));
label_1f0fec:
    // 0x1f0fec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f0ff0:
    if (ctx->pc == 0x1F0FF0u) {
        ctx->pc = 0x1F0FF0u;
            // 0x1f0ff0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0FF4u;
        goto label_1f0ff4;
    }
    ctx->pc = 0x1F0FECu;
    {
        const bool branch_taken_0x1f0fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FECu;
            // 0x1f0ff0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fec) {
            ctx->pc = 0x1F101Cu;
            goto label_1f101c;
        }
    }
    ctx->pc = 0x1F0FF4u;
label_1f0ff4:
    // 0x1f0ff4: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_1f0ff8:
    if (ctx->pc == 0x1F0FF8u) {
        ctx->pc = 0x1F0FF8u;
            // 0x1f0ff8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1F0FFCu;
        goto label_1f0ffc;
    }
    ctx->pc = 0x1F0FF4u;
    {
        const bool branch_taken_0x1f0ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0ff4) {
            ctx->pc = 0x1F0FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0FF4u;
            // 0x1f0ff8: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1008u;
            goto label_1f1008;
        }
    }
    ctx->pc = 0x1F0FFCu;
label_1f0ffc:
    // 0x1f0ffc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f1000:
    // 0x1f1000: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f1004:
    if (ctx->pc == 0x1F1004u) {
        ctx->pc = 0x1F1004u;
            // 0x1f1004: 0x244234f0  addiu       $v0, $v0, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1F1008u;
        goto label_1f1008;
    }
    ctx->pc = 0x1F1000u;
    {
        const bool branch_taken_0x1f1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1000u;
            // 0x1f1004: 0x244234f0  addiu       $v0, $v0, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1000) {
            ctx->pc = 0x1F1014u;
            goto label_1f1014;
        }
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1f100c:
    if (ctx->pc == 0x1F100Cu) {
        ctx->pc = 0x1F100Cu;
            // 0x1f100c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1F1010u;
        goto label_1f1010;
    }
    ctx->pc = 0x1F1008u;
    {
        const bool branch_taken_0x1f1008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1008u;
            // 0x1f100c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1008) {
            ctx->pc = 0x1F101Cu;
            goto label_1f101c;
        }
    }
    ctx->pc = 0x1F1010u;
label_1f1010:
    // 0x1f1010: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
label_1f1014:
    // 0x1f1014: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1f1014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_1f1018:
    // 0x1f1018: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x1f1018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f101c:
    // 0x1f101c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1f1020:
    // 0x1f1020: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f1024:
    // 0x1f1024: 0x40f809  jalr        $v0
label_1f1028:
    if (ctx->pc == 0x1F1028u) {
        ctx->pc = 0x1F1028u;
            // 0x1f1028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F102Cu;
        goto label_1f102c;
    }
    ctx->pc = 0x1F1024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F102Cu);
        ctx->pc = 0x1F1028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1024u;
            // 0x1f1028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E8Cu: goto label_1f0e8c;
            case 0x1F0E90u: goto label_1f0e90;
            case 0x1F0E94u: goto label_1f0e94;
            case 0x1F0E98u: goto label_1f0e98;
            case 0x1F0E9Cu: goto label_1f0e9c;
            case 0x1F0EA0u: goto label_1f0ea0;
            case 0x1F0EA4u: goto label_1f0ea4;
            case 0x1F0EA8u: goto label_1f0ea8;
            case 0x1F0EACu: goto label_1f0eac;
            case 0x1F0EB0u: goto label_1f0eb0;
            case 0x1F0EB4u: goto label_1f0eb4;
            case 0x1F0EB8u: goto label_1f0eb8;
            case 0x1F0EBCu: goto label_1f0ebc;
            case 0x1F0EC0u: goto label_1f0ec0;
            case 0x1F0EC4u: goto label_1f0ec4;
            case 0x1F0EC8u: goto label_1f0ec8;
            case 0x1F0ECCu: goto label_1f0ecc;
            case 0x1F0ED0u: goto label_1f0ed0;
            case 0x1F0ED4u: goto label_1f0ed4;
            case 0x1F0ED8u: goto label_1f0ed8;
            case 0x1F0EDCu: goto label_1f0edc;
            case 0x1F0EE0u: goto label_1f0ee0;
            case 0x1F0EE4u: goto label_1f0ee4;
            case 0x1F0EE8u: goto label_1f0ee8;
            case 0x1F0EECu: goto label_1f0eec;
            case 0x1F0EF0u: goto label_1f0ef0;
            case 0x1F0EF4u: goto label_1f0ef4;
            case 0x1F0EF8u: goto label_1f0ef8;
            case 0x1F0EFCu: goto label_1f0efc;
            case 0x1F0F00u: goto label_1f0f00;
            case 0x1F0F04u: goto label_1f0f04;
            case 0x1F0F08u: goto label_1f0f08;
            case 0x1F0F0Cu: goto label_1f0f0c;
            case 0x1F0F10u: goto label_1f0f10;
            case 0x1F0F14u: goto label_1f0f14;
            case 0x1F0F18u: goto label_1f0f18;
            case 0x1F0F1Cu: goto label_1f0f1c;
            case 0x1F0F20u: goto label_1f0f20;
            case 0x1F0F24u: goto label_1f0f24;
            case 0x1F0F28u: goto label_1f0f28;
            case 0x1F0F2Cu: goto label_1f0f2c;
            case 0x1F0F30u: goto label_1f0f30;
            case 0x1F0F34u: goto label_1f0f34;
            case 0x1F0F38u: goto label_1f0f38;
            case 0x1F0F3Cu: goto label_1f0f3c;
            case 0x1F0F40u: goto label_1f0f40;
            case 0x1F0F44u: goto label_1f0f44;
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F50u: goto label_1f0f50;
            case 0x1F0F54u: goto label_1f0f54;
            case 0x1F0F58u: goto label_1f0f58;
            case 0x1F0F5Cu: goto label_1f0f5c;
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F102Cu; }
            if (ctx->pc != 0x1F102Cu) { return; }
        }
    }
    ctx->pc = 0x1F102Cu;
label_1f102c:
    // 0x1f102c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f1030:
    if (ctx->pc == 0x1F1030u) {
        ctx->pc = 0x1F1030u;
            // 0x1f1030: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1034u;
        goto label_1f1034;
    }
    ctx->pc = 0x1F102Cu;
    {
        const bool branch_taken_0x1f102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F102Cu;
            // 0x1f1030: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f102c) {
            ctx->pc = 0x1F1044u;
            goto label_1f1044;
        }
    }
    ctx->pc = 0x1F1034u;
label_1f1034:
    // 0x1f1034: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f1038:
    // 0x1f1038: 0x40f809  jalr        $v0
label_1f103c:
    if (ctx->pc == 0x1F103Cu) {
        ctx->pc = 0x1F103Cu;
            // 0x1f103c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1040u;
        goto label_1f1040;
    }
    ctx->pc = 0x1F1038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1040u);
        ctx->pc = 0x1F103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1038u;
            // 0x1f103c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E8Cu: goto label_1f0e8c;
            case 0x1F0E90u: goto label_1f0e90;
            case 0x1F0E94u: goto label_1f0e94;
            case 0x1F0E98u: goto label_1f0e98;
            case 0x1F0E9Cu: goto label_1f0e9c;
            case 0x1F0EA0u: goto label_1f0ea0;
            case 0x1F0EA4u: goto label_1f0ea4;
            case 0x1F0EA8u: goto label_1f0ea8;
            case 0x1F0EACu: goto label_1f0eac;
            case 0x1F0EB0u: goto label_1f0eb0;
            case 0x1F0EB4u: goto label_1f0eb4;
            case 0x1F0EB8u: goto label_1f0eb8;
            case 0x1F0EBCu: goto label_1f0ebc;
            case 0x1F0EC0u: goto label_1f0ec0;
            case 0x1F0EC4u: goto label_1f0ec4;
            case 0x1F0EC8u: goto label_1f0ec8;
            case 0x1F0ECCu: goto label_1f0ecc;
            case 0x1F0ED0u: goto label_1f0ed0;
            case 0x1F0ED4u: goto label_1f0ed4;
            case 0x1F0ED8u: goto label_1f0ed8;
            case 0x1F0EDCu: goto label_1f0edc;
            case 0x1F0EE0u: goto label_1f0ee0;
            case 0x1F0EE4u: goto label_1f0ee4;
            case 0x1F0EE8u: goto label_1f0ee8;
            case 0x1F0EECu: goto label_1f0eec;
            case 0x1F0EF0u: goto label_1f0ef0;
            case 0x1F0EF4u: goto label_1f0ef4;
            case 0x1F0EF8u: goto label_1f0ef8;
            case 0x1F0EFCu: goto label_1f0efc;
            case 0x1F0F00u: goto label_1f0f00;
            case 0x1F0F04u: goto label_1f0f04;
            case 0x1F0F08u: goto label_1f0f08;
            case 0x1F0F0Cu: goto label_1f0f0c;
            case 0x1F0F10u: goto label_1f0f10;
            case 0x1F0F14u: goto label_1f0f14;
            case 0x1F0F18u: goto label_1f0f18;
            case 0x1F0F1Cu: goto label_1f0f1c;
            case 0x1F0F20u: goto label_1f0f20;
            case 0x1F0F24u: goto label_1f0f24;
            case 0x1F0F28u: goto label_1f0f28;
            case 0x1F0F2Cu: goto label_1f0f2c;
            case 0x1F0F30u: goto label_1f0f30;
            case 0x1F0F34u: goto label_1f0f34;
            case 0x1F0F38u: goto label_1f0f38;
            case 0x1F0F3Cu: goto label_1f0f3c;
            case 0x1F0F40u: goto label_1f0f40;
            case 0x1F0F44u: goto label_1f0f44;
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F50u: goto label_1f0f50;
            case 0x1F0F54u: goto label_1f0f54;
            case 0x1F0F58u: goto label_1f0f58;
            case 0x1F0F5Cu: goto label_1f0f5c;
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1040u; }
            if (ctx->pc != 0x1F1040u) { return; }
        }
    }
    ctx->pc = 0x1F1040u;
label_1f1040:
    // 0x1f1040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1044:
    // 0x1f1044: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f1044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1048:
    // 0x1f1048: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f1048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f104c:
    // 0x1f104c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f104cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1050:
    // 0x1f1050: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f1050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f1054:
    // 0x1f1054: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f1054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1058:
    // 0x1f1058: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f1058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f105c:
    // 0x1f105c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1f105cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1060:
    // 0x1f1060: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1f1060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1f1064:
    // 0x1f1064: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1f1064u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1068:
    // 0x1f1068: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f1068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1f106c:
    // 0x1f106c: 0x3e00008  jr          $ra
label_1f1070:
    if (ctx->pc == 0x1F1070u) {
        ctx->pc = 0x1F1070u;
            // 0x1f1070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1F1074u;
        goto label_fallthrough_0x1f106c;
    }
    ctx->pc = 0x1F106Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F106Cu;
            // 0x1f1070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E8Cu: goto label_1f0e8c;
            case 0x1F0E90u: goto label_1f0e90;
            case 0x1F0E94u: goto label_1f0e94;
            case 0x1F0E98u: goto label_1f0e98;
            case 0x1F0E9Cu: goto label_1f0e9c;
            case 0x1F0EA0u: goto label_1f0ea0;
            case 0x1F0EA4u: goto label_1f0ea4;
            case 0x1F0EA8u: goto label_1f0ea8;
            case 0x1F0EACu: goto label_1f0eac;
            case 0x1F0EB0u: goto label_1f0eb0;
            case 0x1F0EB4u: goto label_1f0eb4;
            case 0x1F0EB8u: goto label_1f0eb8;
            case 0x1F0EBCu: goto label_1f0ebc;
            case 0x1F0EC0u: goto label_1f0ec0;
            case 0x1F0EC4u: goto label_1f0ec4;
            case 0x1F0EC8u: goto label_1f0ec8;
            case 0x1F0ECCu: goto label_1f0ecc;
            case 0x1F0ED0u: goto label_1f0ed0;
            case 0x1F0ED4u: goto label_1f0ed4;
            case 0x1F0ED8u: goto label_1f0ed8;
            case 0x1F0EDCu: goto label_1f0edc;
            case 0x1F0EE0u: goto label_1f0ee0;
            case 0x1F0EE4u: goto label_1f0ee4;
            case 0x1F0EE8u: goto label_1f0ee8;
            case 0x1F0EECu: goto label_1f0eec;
            case 0x1F0EF0u: goto label_1f0ef0;
            case 0x1F0EF4u: goto label_1f0ef4;
            case 0x1F0EF8u: goto label_1f0ef8;
            case 0x1F0EFCu: goto label_1f0efc;
            case 0x1F0F00u: goto label_1f0f00;
            case 0x1F0F04u: goto label_1f0f04;
            case 0x1F0F08u: goto label_1f0f08;
            case 0x1F0F0Cu: goto label_1f0f0c;
            case 0x1F0F10u: goto label_1f0f10;
            case 0x1F0F14u: goto label_1f0f14;
            case 0x1F0F18u: goto label_1f0f18;
            case 0x1F0F1Cu: goto label_1f0f1c;
            case 0x1F0F20u: goto label_1f0f20;
            case 0x1F0F24u: goto label_1f0f24;
            case 0x1F0F28u: goto label_1f0f28;
            case 0x1F0F2Cu: goto label_1f0f2c;
            case 0x1F0F30u: goto label_1f0f30;
            case 0x1F0F34u: goto label_1f0f34;
            case 0x1F0F38u: goto label_1f0f38;
            case 0x1F0F3Cu: goto label_1f0f3c;
            case 0x1F0F40u: goto label_1f0f40;
            case 0x1F0F44u: goto label_1f0f44;
            case 0x1F0F48u: goto label_1f0f48;
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F50u: goto label_1f0f50;
            case 0x1F0F54u: goto label_1f0f54;
            case 0x1F0F58u: goto label_1f0f58;
            case 0x1F0F5Cu: goto label_1f0f5c;
            case 0x1F0F60u: goto label_1f0f60;
            case 0x1F0F64u: goto label_1f0f64;
            case 0x1F0F68u: goto label_1f0f68;
            case 0x1F0F6Cu: goto label_1f0f6c;
            case 0x1F0F70u: goto label_1f0f70;
            case 0x1F0F74u: goto label_1f0f74;
            case 0x1F0F78u: goto label_1f0f78;
            case 0x1F0F7Cu: goto label_1f0f7c;
            case 0x1F0F80u: goto label_1f0f80;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0F88u: goto label_1f0f88;
            case 0x1F0F8Cu: goto label_1f0f8c;
            case 0x1F0F90u: goto label_1f0f90;
            case 0x1F0F94u: goto label_1f0f94;
            case 0x1F0F98u: goto label_1f0f98;
            case 0x1F0F9Cu: goto label_1f0f9c;
            case 0x1F0FA0u: goto label_1f0fa0;
            case 0x1F0FA4u: goto label_1f0fa4;
            case 0x1F0FA8u: goto label_1f0fa8;
            case 0x1F0FACu: goto label_1f0fac;
            case 0x1F0FB0u: goto label_1f0fb0;
            case 0x1F0FB4u: goto label_1f0fb4;
            case 0x1F0FB8u: goto label_1f0fb8;
            case 0x1F0FBCu: goto label_1f0fbc;
            case 0x1F0FC0u: goto label_1f0fc0;
            case 0x1F0FC4u: goto label_1f0fc4;
            case 0x1F0FC8u: goto label_1f0fc8;
            case 0x1F0FCCu: goto label_1f0fcc;
            case 0x1F0FD0u: goto label_1f0fd0;
            case 0x1F0FD4u: goto label_1f0fd4;
            case 0x1F0FD8u: goto label_1f0fd8;
            case 0x1F0FDCu: goto label_1f0fdc;
            case 0x1F0FE0u: goto label_1f0fe0;
            case 0x1F0FE4u: goto label_1f0fe4;
            case 0x1F0FE8u: goto label_1f0fe8;
            case 0x1F0FECu: goto label_1f0fec;
            case 0x1F0FF0u: goto label_1f0ff0;
            case 0x1F0FF4u: goto label_1f0ff4;
            case 0x1F0FF8u: goto label_1f0ff8;
            case 0x1F0FFCu: goto label_1f0ffc;
            case 0x1F1000u: goto label_1f1000;
            case 0x1F1004u: goto label_1f1004;
            case 0x1F1008u: goto label_1f1008;
            case 0x1F100Cu: goto label_1f100c;
            case 0x1F1010u: goto label_1f1010;
            case 0x1F1014u: goto label_1f1014;
            case 0x1F1018u: goto label_1f1018;
            case 0x1F101Cu: goto label_1f101c;
            case 0x1F1020u: goto label_1f1020;
            case 0x1F1024u: goto label_1f1024;
            case 0x1F1028u: goto label_1f1028;
            case 0x1F102Cu: goto label_1f102c;
            case 0x1F1030u: goto label_1f1030;
            case 0x1F1034u: goto label_1f1034;
            case 0x1F1038u: goto label_1f1038;
            case 0x1F103Cu: goto label_1f103c;
            case 0x1F1040u: goto label_1f1040;
            case 0x1F1044u: goto label_1f1044;
            case 0x1F1048u: goto label_1f1048;
            case 0x1F104Cu: goto label_1f104c;
            case 0x1F1050u: goto label_1f1050;
            case 0x1F1054u: goto label_1f1054;
            case 0x1F1058u: goto label_1f1058;
            case 0x1F105Cu: goto label_1f105c;
            case 0x1F1060u: goto label_1f1060;
            case 0x1F1064u: goto label_1f1064;
            case 0x1F1068u: goto label_1f1068;
            case 0x1F106Cu: goto label_1f106c;
            case 0x1F1070u: goto label_1f1070;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f106c:
    ctx->pc = 0x1F1074u;
}
