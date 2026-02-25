#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DecodeTim2Image
// Address: 0x11b1f8 - 0x11b7e0
void DecodeTim2Image_0x11b1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DecodeTim2Image_0x11b1f8");
#endif

    ctx->pc = 0x11b1f8u;

label_11b1f8:
    // 0x11b1f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_11b1fc:
    // 0x11b1fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11b200:
    // 0x11b200: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x11b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_11b204:
    // 0x11b204: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x11b204u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b208:
    // 0x11b208: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_11b20c:
    // 0x11b20c: 0x27c20030  addiu       $v0, $fp, 0x30
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_11b210:
    // 0x11b210: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b214:
    // 0x11b214: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x11b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_11b218:
    // 0x11b218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b21c:
    // 0x11b21c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x11b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_11b220:
    // 0x11b220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b224:
    // 0x11b224: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x11b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_11b228:
    // 0x11b228: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x11b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_11b22c:
    // 0x11b22c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x11b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_11b230:
    // 0x11b230: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_11b234:
    // 0x11b234: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_11b238:
    // 0x11b238: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_11b23c:
    // 0x11b23c: 0xc04ed90  jal         func_13B640
label_11b240:
    if (ctx->pc == 0x11B240u) {
        ctx->pc = 0x11B240u;
            // 0x11b240: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x11B244u;
        goto label_11b244;
    }
    ctx->pc = 0x11B23Cu;
    SET_GPR_U32(ctx, 31, 0x11B244u);
    ctx->pc = 0x11B240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B23Cu;
            // 0x11b240: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B244u; }
        if (ctx->pc != 0x11B244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B244u; }
        if (ctx->pc != 0x11B244u) { return; }
    }
    ctx->pc = 0x11B244u;
label_11b244:
    // 0x11b244: 0x93c30011  lbu         $v1, 0x11($fp)
    ctx->pc = 0x11b244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
label_11b248:
    // 0x11b248: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_11b24c:
    if (ctx->pc == 0x11B24Cu) {
        ctx->pc = 0x11B24Cu;
            // 0x11b24c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x11B250u;
        goto label_11b250;
    }
    ctx->pc = 0x11B248u;
    {
        const bool branch_taken_0x11b248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B248u;
            // 0x11b24c: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b248) {
            ctx->pc = 0x11B260u;
            goto label_11b260;
        }
    }
    ctx->pc = 0x11B250u;
label_11b250:
    // 0x11b250: 0xc046b56  jal         func_11AD58
label_11b254:
    if (ctx->pc == 0x11B254u) {
        ctx->pc = 0x11B254u;
            // 0x11b254: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x11B258u;
        goto label_11b258;
    }
    ctx->pc = 0x11B250u;
    SET_GPR_U32(ctx, 31, 0x11B258u);
    ctx->pc = 0x11B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B250u;
            // 0x11b254: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B258u; }
        if (ctx->pc != 0x11B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B258u; }
        if (ctx->pc != 0x11B258u) { return; }
    }
    ctx->pc = 0x11B258u;
label_11b258:
    // 0x11b258: 0x10000156  b           . + 4 + (0x156 << 2)
label_11b25c:
    if (ctx->pc == 0x11B25Cu) {
        ctx->pc = 0x11B25Cu;
            // 0x11b25c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x11B260u;
        goto label_11b260;
    }
    ctx->pc = 0x11B258u;
    {
        const bool branch_taken_0x11b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B258u;
            // 0x11b25c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b258) {
            ctx->pc = 0x11B7B4u;
            goto label_11b7b4;
        }
    }
    ctx->pc = 0x11B260u;
label_11b260:
    // 0x11b260: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x11b260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_11b264:
    // 0x11b264: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11b264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_11b268:
    // 0x11b268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b26c:
    // 0x11b26c: 0xc046b62  jal         func_11AD88
label_11b270:
    if (ctx->pc == 0x11B270u) {
        ctx->pc = 0x11B270u;
            // 0x11b270: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x11B274u;
        goto label_11b274;
    }
    ctx->pc = 0x11B26Cu;
    SET_GPR_U32(ctx, 31, 0x11B274u);
    ctx->pc = 0x11B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B26Cu;
            // 0x11b270: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD88u;
    if (runtime->hasFunction(0x11AD88u)) {
        auto targetFn = runtime->lookupFunction(0x11AD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B274u; }
        if (ctx->pc != 0x11B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x11ad88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B274u; }
        if (ctx->pc != 0x11B274u) { return; }
    }
    ctx->pc = 0x11B274u;
label_11b274:
    // 0x11b274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b278:
    // 0x11b278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b27c:
    // 0x11b27c: 0xc046b62  jal         func_11AD88
label_11b280:
    if (ctx->pc == 0x11B280u) {
        ctx->pc = 0x11B280u;
            // 0x11b280: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x11B284u;
        goto label_11b284;
    }
    ctx->pc = 0x11B27Cu;
    SET_GPR_U32(ctx, 31, 0x11B284u);
    ctx->pc = 0x11B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B27Cu;
            // 0x11b280: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD88u;
    if (runtime->hasFunction(0x11AD88u)) {
        auto targetFn = runtime->lookupFunction(0x11AD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B284u; }
        if (ctx->pc != 0x11B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x11ad88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B284u; }
        if (ctx->pc != 0x11B284u) { return; }
    }
    ctx->pc = 0x11B284u;
label_11b284:
    // 0x11b284: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x11b284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_11b288:
    // 0x11b288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b28c:
    // 0x11b28c: 0xc046b62  jal         func_11AD88
label_11b290:
    if (ctx->pc == 0x11B290u) {
        ctx->pc = 0x11B290u;
            // 0x11b290: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x11B294u;
        goto label_11b294;
    }
    ctx->pc = 0x11B28Cu;
    SET_GPR_U32(ctx, 31, 0x11B294u);
    ctx->pc = 0x11B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B28Cu;
            // 0x11b290: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD88u;
    if (runtime->hasFunction(0x11AD88u)) {
        auto targetFn = runtime->lookupFunction(0x11AD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B294u; }
        if (ctx->pc != 0x11B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x11ad88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B294u; }
        if (ctx->pc != 0x11B294u) { return; }
    }
    ctx->pc = 0x11B294u;
label_11b294:
    // 0x11b294: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11b294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b298:
    // 0x11b298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b29c:
    // 0x11b29c: 0xc046b62  jal         func_11AD88
label_11b2a0:
    if (ctx->pc == 0x11B2A0u) {
        ctx->pc = 0x11B2A0u;
            // 0x11b2a0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x11B2A4u;
        goto label_11b2a4;
    }
    ctx->pc = 0x11B29Cu;
    SET_GPR_U32(ctx, 31, 0x11B2A4u);
    ctx->pc = 0x11B2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B29Cu;
            // 0x11b2a0: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD88u;
    if (runtime->hasFunction(0x11AD88u)) {
        auto targetFn = runtime->lookupFunction(0x11AD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B2A4u; }
        if (ctx->pc != 0x11B2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x11ad88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B2A4u; }
        if (ctx->pc != 0x11B2A4u) { return; }
    }
    ctx->pc = 0x11B2A4u;
label_11b2a4:
    // 0x11b2a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11b2a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b2a8:
    // 0x11b2a8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_11b2ac:
    // 0x11b2ac: 0x93c20013  lbu         $v0, 0x13($fp)
    ctx->pc = 0x11b2acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
label_11b2b0:
    // 0x11b2b0: 0x2463ea80  addiu       $v1, $v1, -0x1580
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
label_11b2b4:
    // 0x11b2b4: 0xdfc50018  ld          $a1, 0x18($fp)
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 24)));
label_11b2b8:
    // 0x11b2b8: 0x3c04fc0f  lui         $a0, 0xFC0F
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64527 << 16));
label_11b2bc:
    // 0x11b2bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11b2bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
label_11b2c0:
    // 0x11b2c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_11b2c4:
    // 0x11b2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11b2c8:
    // 0x11b2c8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x11b2c8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_11b2cc:
    // 0x11b2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11b2d0:
    // 0x11b2d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b2d4:
    // 0x11b2d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x11b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_11b2d8:
    // 0x11b2d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11b2d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b2dc:
    // 0x11b2dc: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x11b2dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)63u)));
label_11b2e0:
    // 0x11b2e0: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x11b2e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
label_11b2e4:
    // 0x11b2e4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x11b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
label_11b2e8:
    // 0x11b2e8: 0x97d30014  lhu         $s3, 0x14($fp)
    ctx->pc = 0x11b2e8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
label_11b2ec:
    // 0x11b2ec: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x11b2ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
label_11b2f0:
    // 0x11b2f0: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_11b2f4:
    // 0x11b2f4: 0x97d40016  lhu         $s4, 0x16($fp)
    ctx->pc = 0x11b2f4u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 22)));
label_11b2f8:
    // 0x11b2f8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_11b2fc:
    // 0x11b2fc: 0x2a630040  slti        $v1, $s3, 0x40
    ctx->pc = 0x11b2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_11b300:
    // 0x11b300: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_11b304:
    if (ctx->pc == 0x11B304u) {
        ctx->pc = 0x11B304u;
            // 0x11b304: 0xffc50018  sd          $a1, 0x18($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 5));
        ctx->pc = 0x11B308u;
        goto label_11b308;
    }
    ctx->pc = 0x11B300u;
    {
        const bool branch_taken_0x11b300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B300u;
            // 0x11b304: 0xffc50018  sd          $a1, 0x18($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b300) {
            ctx->pc = 0x11B310u;
            goto label_11b310;
        }
    }
    ctx->pc = 0x11B308u;
label_11b308:
    // 0x11b308: 0x10000014  b           . + 4 + (0x14 << 2)
label_11b30c:
    if (ctx->pc == 0x11B30Cu) {
        ctx->pc = 0x11B30Cu;
            // 0x11b30c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11B310u;
        goto label_11b310;
    }
    ctx->pc = 0x11B308u;
    {
        const bool branch_taken_0x11b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B308u;
            // 0x11b30c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b308) {
            ctx->pc = 0x11B35Cu;
            goto label_11b35c;
        }
    }
    ctx->pc = 0x11B310u;
label_11b310:
    // 0x11b310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b314:
    // 0x11b314: 0x2463ffed  addiu       $v1, $v1, -0x13
    ctx->pc = 0x11b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
label_11b318:
    // 0x11b318: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11b318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11b31c:
    // 0x11b31c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11b320:
    if (ctx->pc == 0x11B320u) {
        ctx->pc = 0x11B320u;
            // 0x11b320: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x11B324u;
        goto label_11b324;
    }
    ctx->pc = 0x11B31Cu;
    {
        const bool branch_taken_0x11b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B31Cu;
            // 0x11b320: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b31c) {
            ctx->pc = 0x11B344u;
            goto label_11b344;
        }
    }
    ctx->pc = 0x11B324u;
label_11b324:
    // 0x11b324: 0x2664007f  addiu       $a0, $s3, 0x7F
    ctx->pc = 0x11b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
label_11b328:
    // 0x11b328: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b32c:
    // 0x11b32c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x11b32cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_11b330:
    // 0x11b330: 0x266200fe  addiu       $v0, $s3, 0xFE
    ctx->pc = 0x11b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 254));
label_11b334:
    // 0x11b334: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x11b334u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11b338:
    // 0x11b338: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x11b338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_11b33c:
    // 0x11b33c: 0x10000007  b           . + 4 + (0x7 << 2)
label_11b340:
    if (ctx->pc == 0x11B340u) {
        ctx->pc = 0x11B340u;
            // 0x11b340: 0x28840  sll         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x11B344u;
        goto label_11b344;
    }
    ctx->pc = 0x11B33Cu;
    {
        const bool branch_taken_0x11b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B33Cu;
            // 0x11b340: 0x28840  sll         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b33c) {
            ctx->pc = 0x11B35Cu;
            goto label_11b35c;
        }
    }
    ctx->pc = 0x11B344u;
label_11b344:
    // 0x11b344: 0x2664003f  addiu       $a0, $s3, 0x3F
    ctx->pc = 0x11b344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
label_11b348:
    // 0x11b348: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b34c:
    // 0x11b34c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x11b34cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_11b350:
    // 0x11b350: 0x2662007e  addiu       $v0, $s3, 0x7E
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 126));
label_11b354:
    // 0x11b354: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x11b354u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11b358:
    // 0x11b358: 0x28983  sra         $s1, $v0, 6
    ctx->pc = 0x11b358u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 6));
label_11b35c:
    // 0x11b35c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x11b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b360:
    // 0x11b360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b364:
    // 0x11b364: 0xc044502  jal         func_111408
label_11b368:
    if (ctx->pc == 0x11B368u) {
        ctx->pc = 0x11B368u;
            // 0x11b368: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B36Cu;
        goto label_11b36c;
    }
    ctx->pc = 0x11B364u;
    SET_GPR_U32(ctx, 31, 0x11B36Cu);
    ctx->pc = 0x11B368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B364u;
            // 0x11b368: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111408u;
    if (runtime->hasFunction(0x111408u)) {
        auto targetFn = runtime->lookupFunction(0x111408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B36Cu; }
        if (ctx->pc != 0x11B36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsPageSize_0x111408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B36Cu; }
        if (ctx->pc != 0x11B36Cu) { return; }
    }
    ctx->pc = 0x11B36Cu;
label_11b36c:
    // 0x11b36c: 0xc046c5a  jal         func_11B168
label_11b370:
    if (ctx->pc == 0x11B370u) {
        ctx->pc = 0x11B374u;
        goto label_11b374;
    }
    ctx->pc = 0x11B36Cu;
    SET_GPR_U32(ctx, 31, 0x11B374u);
    ctx->pc = 0x11B168u;
    if (runtime->hasFunction(0x11B168u)) {
        auto targetFn = runtime->lookupFunction(0x11B168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B374u; }
        if (ctx->pc != 0x11B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getLocalTbp_0x11b168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B374u; }
        if (ctx->pc != 0x11B374u) { return; }
    }
    ctx->pc = 0x11B374u;
label_11b374:
    // 0x11b374: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11b374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_11b378:
    // 0x11b378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b37c:
    // 0x11b37c: 0xac8072c0  sw          $zero, 0x72C0($a0)
    ctx->pc = 0x11b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29376), GPR_U32(ctx, 0));
label_11b380:
    // 0x11b380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b384:
    // 0x11b384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b388:
    // 0x11b388: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b38c:
    // 0x11b38c: 0x8fab0024  lw          $t3, 0x24($sp)
    ctx->pc = 0x11b38cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_11b390:
    // 0x11b390: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b394:
    // 0x11b394: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x11b394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11b398:
    // 0x11b398: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b39c:
    // 0x11b39c: 0xc046bc4  jal         func_11AF10
label_11b3a0:
    if (ctx->pc == 0x11B3A0u) {
        ctx->pc = 0x11B3A0u;
            // 0x11b3a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A4u;
        goto label_11b3a4;
    }
    ctx->pc = 0x11B39Cu;
    SET_GPR_U32(ctx, 31, 0x11B3A4u);
    ctx->pc = 0x11B3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B39Cu;
            // 0x11b3a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AF10u;
    if (runtime->hasFunction(0x11AF10u)) {
        auto targetFn = runtime->lookupFunction(0x11AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3A4u; }
        if (ctx->pc != 0x11B3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeTim2TexturePacket_0x11af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3A4u; }
        if (ctx->pc != 0x11B3A4u) { return; }
    }
    ctx->pc = 0x11B3A4u;
label_11b3a4:
    // 0x11b3a4: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
label_11b3a8:
    if (ctx->pc == 0x11B3A8u) {
        ctx->pc = 0x11B3A8u;
            // 0x11b3a8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x11B3ACu;
        goto label_11b3ac;
    }
    ctx->pc = 0x11B3A4u;
    {
        const bool branch_taken_0x11b3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3A4u;
            // 0x11b3a8: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3a4) {
            ctx->pc = 0x11B7B4u;
            goto label_11b7b4;
        }
    }
    ctx->pc = 0x11B3ACu;
label_11b3ac:
    // 0x11b3ac: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x11b3acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_11b3b0:
    // 0x11b3b0: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x11b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_11b3b4:
    // 0x11b3b4: 0x32043fff  andi        $a0, $s0, 0x3FFF
    ctx->pc = 0x11b3b4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b3b8:
    // 0x11b3b8: 0x3c06fff0  lui         $a2, 0xFFF0
    ctx->pc = 0x11b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65520 << 16));
label_11b3bc:
    // 0x11b3bc: 0x34c63fff  ori         $a2, $a2, 0x3FFF
    ctx->pc = 0x11b3bcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)16383u)));
label_11b3c0:
    // 0x11b3c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b3c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_11b3c4:
    // 0x11b3c4: 0x3225003f  andi        $a1, $s1, 0x3F
    ctx->pc = 0x11b3c4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b3c8:
    // 0x11b3c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11b3c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_11b3cc:
    // 0x11b3cc: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x11b3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
label_11b3d0:
    // 0x11b3d0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x11b3d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_11b3d4:
    // 0x11b3d4: 0x3c03fc0f  lui         $v1, 0xFC0F
    ctx->pc = 0x11b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64527 << 16));
label_11b3d8:
    // 0x11b3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11b3d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
label_11b3dc:
    // 0x11b3dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11b3dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_11b3e0:
    // 0x11b3e0: 0x32a4003f  andi        $a0, $s5, 0x3F
    ctx->pc = 0x11b3e0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)63u)));
label_11b3e4:
    // 0x11b3e4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x11b3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_11b3e8:
    // 0x11b3e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b3e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_11b3ec:
    // 0x11b3ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11b3ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_11b3f0:
    // 0x11b3f0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_11b3f4:
    // 0x11b3f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b3f8:
    // 0x11b3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b3fc:
    // 0x11b3fc: 0xc046c3e  jal         func_11B0F8
label_11b400:
    if (ctx->pc == 0x11B400u) {
        ctx->pc = 0x11B400u;
            // 0x11b400: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x11B404u;
        goto label_11b404;
    }
    ctx->pc = 0x11B3FCu;
    SET_GPR_U32(ctx, 31, 0x11B404u);
    ctx->pc = 0x11B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3FCu;
            // 0x11b400: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B0F8u;
    if (runtime->hasFunction(0x11B0F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B404u; }
        if (ctx->pc != 0x11B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getLog2_0x11b0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B404u; }
        if (ctx->pc != 0x11B404u) { return; }
    }
    ctx->pc = 0x11B404u;
label_11b404:
    // 0x11b404: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x11b404u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_11b408:
    // 0x11b408: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x11b408u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
label_11b40c:
    // 0x11b40c: 0x3c04c3ff  lui         $a0, 0xC3FF
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50175 << 16));
label_11b410:
    // 0x11b410: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11b410u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
label_11b414:
    // 0x11b414: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x11b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_11b418:
    // 0x11b418: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11b418u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b41c:
    // 0x11b41c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b41cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b420:
    // 0x11b420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11b424:
    // 0x11b424: 0xc046c3e  jal         func_11B0F8
label_11b428:
    if (ctx->pc == 0x11B428u) {
        ctx->pc = 0x11B428u;
            // 0x11b428: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->pc = 0x11B42Cu;
        goto label_11b42c;
    }
    ctx->pc = 0x11B424u;
    SET_GPR_U32(ctx, 31, 0x11B42Cu);
    ctx->pc = 0x11B428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B424u;
            // 0x11b428: 0xfe430000  sd          $v1, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B0F8u;
    if (runtime->hasFunction(0x11B0F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B42Cu; }
        if (ctx->pc != 0x11B42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getLog2_0x11b0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B42Cu; }
        if (ctx->pc != 0x11B42Cu) { return; }
    }
    ctx->pc = 0x11B42Cu;
label_11b42c:
    // 0x11b42c: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_11b430:
    // 0x11b430: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x11b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_11b434:
    // 0x11b434: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11b434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_11b438:
    // 0x11b438: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x11b438u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16383u)));
label_11b43c:
    // 0x11b43c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11b43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_11b440:
    // 0x11b440: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11b440u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
label_11b444:
    // 0x11b444: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x11b444u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
label_11b448:
    // 0x11b448: 0x2406ffe3  addiu       $a2, $zero, -0x1D
    ctx->pc = 0x11b448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_11b44c:
    // 0x11b44c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x11b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_11b450:
    // 0x11b450: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11b450u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b454:
    // 0x11b454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b454u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b458:
    // 0x11b458: 0x2405fe3f  addiu       $a1, $zero, -0x1C1
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_11b45c:
    // 0x11b45c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x11b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_11b460:
    // 0x11b460: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11b464:
    // 0x11b464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x11b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_11b468:
    // 0x11b468: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x11b468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_11b46c:
    // 0x11b46c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x11b46cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_11b470:
    // 0x11b470: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x11b470u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_11b474:
    // 0x11b474: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11b474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_11b478:
    // 0x11b478: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x11b478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_11b47c:
    // 0x11b47c: 0x93c30011  lbu         $v1, 0x11($fp)
    ctx->pc = 0x11b47cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
label_11b480:
    // 0x11b480: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b484:
    // 0x11b484: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x11b484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_11b488:
    // 0x11b488: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_11b48c:
    if (ctx->pc == 0x11B48Cu) {
        ctx->pc = 0x11B48Cu;
            // 0x11b48c: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x11B490u;
        goto label_11b490;
    }
    ctx->pc = 0x11B488u;
    {
        const bool branch_taken_0x11b488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B488u;
            // 0x11b48c: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b488) {
            ctx->pc = 0x11B7ACu;
            goto label_11b7ac;
        }
    }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b494:
    // 0x11b494: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11b498:
    // 0x11b498: 0x2463ffed  addiu       $v1, $v1, -0x13
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
label_11b49c:
    // 0x11b49c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x11b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_11b4a0:
    // 0x11b4a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x11b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_11b4a4:
    // 0x11b4a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b4a8:
    // 0x11b4a8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x11b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_11b4ac:
    // 0x11b4ac: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x11b4acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_11b4b0:
    // 0x11b4b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_11b4b4:
    // 0x11b4b4: 0x1327c2  srl         $a0, $s3, 31
    ctx->pc = 0x11b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
label_11b4b8:
    // 0x11b4b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11b4bc:
    // 0x11b4bc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_11b4c0:
    // 0x11b4c0: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_11b4c4:
    // 0x11b4c4: 0x49843  sra         $s3, $a0, 1
    ctx->pc = 0x11b4c4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 1));
label_11b4c8:
    // 0x11b4c8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x11b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_11b4cc:
    // 0x11b4cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b4d0:
    // 0x11b4d0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_11b4d4:
    // 0x11b4d4: 0x3a043  sra         $s4, $v1, 1
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 1));
label_11b4d8:
    // 0x11b4d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11b4dc:
    // 0x11b4dc: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x11b4dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11b4e0:
    // 0x11b4e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11b4e4:
    // 0x11b4e4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11b4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11b4e8:
    // 0x11b4e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11b4ec:
    if (ctx->pc == 0x11B4ECu) {
        ctx->pc = 0x11B4ECu;
            // 0x11b4ec: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x11B4F0u;
        goto label_11b4f0;
    }
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4E8u;
            // 0x11b4ec: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B510u;
            goto label_11b510;
        }
    }
    ctx->pc = 0x11B4F0u;
label_11b4f0:
    // 0x11b4f0: 0x2664007f  addiu       $a0, $s3, 0x7F
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
label_11b4f4:
    // 0x11b4f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b4f8:
    // 0x11b4f8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x11b4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_11b4fc:
    // 0x11b4fc: 0x266200fe  addiu       $v0, $s3, 0xFE
    ctx->pc = 0x11b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 254));
label_11b500:
    // 0x11b500: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x11b500u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11b504:
    // 0x11b504: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x11b504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_11b508:
    // 0x11b508: 0x10000007  b           . + 4 + (0x7 << 2)
label_11b50c:
    if (ctx->pc == 0x11B50Cu) {
        ctx->pc = 0x11B50Cu;
            // 0x11b50c: 0x28840  sll         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x11B510u;
        goto label_11b510;
    }
    ctx->pc = 0x11B508u;
    {
        const bool branch_taken_0x11b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B508u;
            // 0x11b50c: 0x28840  sll         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b508) {
            ctx->pc = 0x11B528u;
            goto label_11b528;
        }
    }
    ctx->pc = 0x11B510u;
label_11b510:
    // 0x11b510: 0x2664003f  addiu       $a0, $s3, 0x3F
    ctx->pc = 0x11b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
label_11b514:
    // 0x11b514: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b518:
    // 0x11b518: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x11b518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_11b51c:
    // 0x11b51c: 0x2662007e  addiu       $v0, $s3, 0x7E
    ctx->pc = 0x11b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 126));
label_11b520:
    // 0x11b520: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x11b520u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11b524:
    // 0x11b524: 0x28983  sra         $s1, $v0, 6
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 6));
label_11b528:
    // 0x11b528: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x11b528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b52c:
    // 0x11b52c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b530:
    // 0x11b530: 0xc044502  jal         func_111408
label_11b534:
    if (ctx->pc == 0x11B534u) {
        ctx->pc = 0x11B534u;
            // 0x11b534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B538u;
        goto label_11b538;
    }
    ctx->pc = 0x11B530u;
    SET_GPR_U32(ctx, 31, 0x11B538u);
    ctx->pc = 0x11B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B530u;
            // 0x11b534: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111408u;
    if (runtime->hasFunction(0x111408u)) {
        auto targetFn = runtime->lookupFunction(0x111408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B538u; }
        if (ctx->pc != 0x11B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsPageSize_0x111408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B538u; }
        if (ctx->pc != 0x11B538u) { return; }
    }
    ctx->pc = 0x11B538u;
label_11b538:
    // 0x11b538: 0xc046c76  jal         func_11B1D8
label_11b53c:
    if (ctx->pc == 0x11B53Cu) {
        ctx->pc = 0x11B53Cu;
            // 0x11b53c: 0x22182  srl         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x11B540u;
        goto label_11b540;
    }
    ctx->pc = 0x11B538u;
    SET_GPR_U32(ctx, 31, 0x11B540u);
    ctx->pc = 0x11B53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B538u;
            // 0x11b53c: 0x22182  srl         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B1D8u;
    if (runtime->hasFunction(0x11B1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11B1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B540u; }
        if (ctx->pc != 0x11B540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getTbp_0x11b1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B540u; }
        if (ctx->pc != 0x11B540u) { return; }
    }
    ctx->pc = 0x11B540u;
label_11b540:
    // 0x11b540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b544:
    // 0x11b544: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_11b548:
    // 0x11b548: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b54c:
    // 0x11b54c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b550:
    // 0x11b550: 0x8fab0024  lw          $t3, 0x24($sp)
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_11b554:
    // 0x11b554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b558:
    // 0x11b558: 0xac8272c0  sw          $v0, 0x72C0($a0)
    ctx->pc = 0x11b558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29376), GPR_U32(ctx, 2));
label_11b55c:
    // 0x11b55c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b560:
    // 0x11b560: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11b564:
    // 0x11b564: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11b568:
    // 0x11b568: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b56c:
    // 0x11b56c: 0xc046bc4  jal         func_11AF10
label_11b570:
    if (ctx->pc == 0x11B570u) {
        ctx->pc = 0x11B570u;
            // 0x11b570: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B574u;
        goto label_11b574;
    }
    ctx->pc = 0x11B56Cu;
    SET_GPR_U32(ctx, 31, 0x11B574u);
    ctx->pc = 0x11B570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B56Cu;
            // 0x11b570: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AF10u;
    if (runtime->hasFunction(0x11AF10u)) {
        auto targetFn = runtime->lookupFunction(0x11AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B574u; }
        if (ctx->pc != 0x11B574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeTim2TexturePacket_0x11af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B574u; }
        if (ctx->pc != 0x11B574u) { return; }
    }
    ctx->pc = 0x11B574u;
label_11b574:
    // 0x11b574: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
label_11b578:
    if (ctx->pc == 0x11B578u) {
        ctx->pc = 0x11B578u;
            // 0x11b578: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x11B57Cu;
        goto label_11b57c;
    }
    ctx->pc = 0x11B574u;
    {
        const bool branch_taken_0x11b574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B574u;
            // 0x11b578: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b574) {
            ctx->pc = 0x11B7B4u;
            goto label_11b7b4;
        }
    }
    ctx->pc = 0x11B57Cu;
label_11b57c:
    // 0x11b57c: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x11b57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_11b580:
    // 0x11b580: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_11b584:
    if (ctx->pc == 0x11B584u) {
        ctx->pc = 0x11B584u;
            // 0x11b584: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x11B588u;
        goto label_11b588;
    }
    ctx->pc = 0x11B580u;
    {
        const bool branch_taken_0x11b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B580u;
            // 0x11b584: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b580) {
            ctx->pc = 0x11B754u;
            goto label_11b754;
        }
    }
    ctx->pc = 0x11B588u;
label_11b588:
    // 0x11b588: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x11b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_11b58c:
    // 0x11b58c: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x11b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
label_11b590:
    // 0x11b590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11b594:
    // 0x11b594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11b598:
    // 0x11b598: 0x800008  jr          $a0
label_11b59c:
    if (ctx->pc == 0x11B59Cu) {
        ctx->pc = 0x11B5A0u;
        goto label_11b5a0;
    }
    ctx->pc = 0x11B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B1F8u: goto label_11b1f8;
            case 0x11B1FCu: goto label_11b1fc;
            case 0x11B200u: goto label_11b200;
            case 0x11B204u: goto label_11b204;
            case 0x11B208u: goto label_11b208;
            case 0x11B20Cu: goto label_11b20c;
            case 0x11B210u: goto label_11b210;
            case 0x11B214u: goto label_11b214;
            case 0x11B218u: goto label_11b218;
            case 0x11B21Cu: goto label_11b21c;
            case 0x11B220u: goto label_11b220;
            case 0x11B224u: goto label_11b224;
            case 0x11B228u: goto label_11b228;
            case 0x11B22Cu: goto label_11b22c;
            case 0x11B230u: goto label_11b230;
            case 0x11B234u: goto label_11b234;
            case 0x11B238u: goto label_11b238;
            case 0x11B23Cu: goto label_11b23c;
            case 0x11B240u: goto label_11b240;
            case 0x11B244u: goto label_11b244;
            case 0x11B248u: goto label_11b248;
            case 0x11B24Cu: goto label_11b24c;
            case 0x11B250u: goto label_11b250;
            case 0x11B254u: goto label_11b254;
            case 0x11B258u: goto label_11b258;
            case 0x11B25Cu: goto label_11b25c;
            case 0x11B260u: goto label_11b260;
            case 0x11B264u: goto label_11b264;
            case 0x11B268u: goto label_11b268;
            case 0x11B26Cu: goto label_11b26c;
            case 0x11B270u: goto label_11b270;
            case 0x11B274u: goto label_11b274;
            case 0x11B278u: goto label_11b278;
            case 0x11B27Cu: goto label_11b27c;
            case 0x11B280u: goto label_11b280;
            case 0x11B284u: goto label_11b284;
            case 0x11B288u: goto label_11b288;
            case 0x11B28Cu: goto label_11b28c;
            case 0x11B290u: goto label_11b290;
            case 0x11B294u: goto label_11b294;
            case 0x11B298u: goto label_11b298;
            case 0x11B29Cu: goto label_11b29c;
            case 0x11B2A0u: goto label_11b2a0;
            case 0x11B2A4u: goto label_11b2a4;
            case 0x11B2A8u: goto label_11b2a8;
            case 0x11B2ACu: goto label_11b2ac;
            case 0x11B2B0u: goto label_11b2b0;
            case 0x11B2B4u: goto label_11b2b4;
            case 0x11B2B8u: goto label_11b2b8;
            case 0x11B2BCu: goto label_11b2bc;
            case 0x11B2C0u: goto label_11b2c0;
            case 0x11B2C4u: goto label_11b2c4;
            case 0x11B2C8u: goto label_11b2c8;
            case 0x11B2CCu: goto label_11b2cc;
            case 0x11B2D0u: goto label_11b2d0;
            case 0x11B2D4u: goto label_11b2d4;
            case 0x11B2D8u: goto label_11b2d8;
            case 0x11B2DCu: goto label_11b2dc;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2E4u: goto label_11b2e4;
            case 0x11B2E8u: goto label_11b2e8;
            case 0x11B2ECu: goto label_11b2ec;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B2F8u: goto label_11b2f8;
            case 0x11B2FCu: goto label_11b2fc;
            case 0x11B300u: goto label_11b300;
            case 0x11B304u: goto label_11b304;
            case 0x11B308u: goto label_11b308;
            case 0x11B30Cu: goto label_11b30c;
            case 0x11B310u: goto label_11b310;
            case 0x11B314u: goto label_11b314;
            case 0x11B318u: goto label_11b318;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B320u: goto label_11b320;
            case 0x11B324u: goto label_11b324;
            case 0x11B328u: goto label_11b328;
            case 0x11B32Cu: goto label_11b32c;
            case 0x11B330u: goto label_11b330;
            case 0x11B334u: goto label_11b334;
            case 0x11B338u: goto label_11b338;
            case 0x11B33Cu: goto label_11b33c;
            case 0x11B340u: goto label_11b340;
            case 0x11B344u: goto label_11b344;
            case 0x11B348u: goto label_11b348;
            case 0x11B34Cu: goto label_11b34c;
            case 0x11B350u: goto label_11b350;
            case 0x11B354u: goto label_11b354;
            case 0x11B358u: goto label_11b358;
            case 0x11B35Cu: goto label_11b35c;
            case 0x11B360u: goto label_11b360;
            case 0x11B364u: goto label_11b364;
            case 0x11B368u: goto label_11b368;
            case 0x11B36Cu: goto label_11b36c;
            case 0x11B370u: goto label_11b370;
            case 0x11B374u: goto label_11b374;
            case 0x11B378u: goto label_11b378;
            case 0x11B37Cu: goto label_11b37c;
            case 0x11B380u: goto label_11b380;
            case 0x11B384u: goto label_11b384;
            case 0x11B388u: goto label_11b388;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B390u: goto label_11b390;
            case 0x11B394u: goto label_11b394;
            case 0x11B398u: goto label_11b398;
            case 0x11B39Cu: goto label_11b39c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B3A8u: goto label_11b3a8;
            case 0x11B3ACu: goto label_11b3ac;
            case 0x11B3B0u: goto label_11b3b0;
            case 0x11B3B4u: goto label_11b3b4;
            case 0x11B3B8u: goto label_11b3b8;
            case 0x11B3BCu: goto label_11b3bc;
            case 0x11B3C0u: goto label_11b3c0;
            case 0x11B3C4u: goto label_11b3c4;
            case 0x11B3C8u: goto label_11b3c8;
            case 0x11B3CCu: goto label_11b3cc;
            case 0x11B3D0u: goto label_11b3d0;
            case 0x11B3D4u: goto label_11b3d4;
            case 0x11B3D8u: goto label_11b3d8;
            case 0x11B3DCu: goto label_11b3dc;
            case 0x11B3E0u: goto label_11b3e0;
            case 0x11B3E4u: goto label_11b3e4;
            case 0x11B3E8u: goto label_11b3e8;
            case 0x11B3ECu: goto label_11b3ec;
            case 0x11B3F0u: goto label_11b3f0;
            case 0x11B3F4u: goto label_11b3f4;
            case 0x11B3F8u: goto label_11b3f8;
            case 0x11B3FCu: goto label_11b3fc;
            case 0x11B400u: goto label_11b400;
            case 0x11B404u: goto label_11b404;
            case 0x11B408u: goto label_11b408;
            case 0x11B40Cu: goto label_11b40c;
            case 0x11B410u: goto label_11b410;
            case 0x11B414u: goto label_11b414;
            case 0x11B418u: goto label_11b418;
            case 0x11B41Cu: goto label_11b41c;
            case 0x11B420u: goto label_11b420;
            case 0x11B424u: goto label_11b424;
            case 0x11B428u: goto label_11b428;
            case 0x11B42Cu: goto label_11b42c;
            case 0x11B430u: goto label_11b430;
            case 0x11B434u: goto label_11b434;
            case 0x11B438u: goto label_11b438;
            case 0x11B43Cu: goto label_11b43c;
            case 0x11B440u: goto label_11b440;
            case 0x11B444u: goto label_11b444;
            case 0x11B448u: goto label_11b448;
            case 0x11B44Cu: goto label_11b44c;
            case 0x11B450u: goto label_11b450;
            case 0x11B454u: goto label_11b454;
            case 0x11B458u: goto label_11b458;
            case 0x11B45Cu: goto label_11b45c;
            case 0x11B460u: goto label_11b460;
            case 0x11B464u: goto label_11b464;
            case 0x11B468u: goto label_11b468;
            case 0x11B46Cu: goto label_11b46c;
            case 0x11B470u: goto label_11b470;
            case 0x11B474u: goto label_11b474;
            case 0x11B478u: goto label_11b478;
            case 0x11B47Cu: goto label_11b47c;
            case 0x11B480u: goto label_11b480;
            case 0x11B484u: goto label_11b484;
            case 0x11B488u: goto label_11b488;
            case 0x11B48Cu: goto label_11b48c;
            case 0x11B490u: goto label_11b490;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B49Cu: goto label_11b49c;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4A4u: goto label_11b4a4;
            case 0x11B4A8u: goto label_11b4a8;
            case 0x11B4ACu: goto label_11b4ac;
            case 0x11B4B0u: goto label_11b4b0;
            case 0x11B4B4u: goto label_11b4b4;
            case 0x11B4B8u: goto label_11b4b8;
            case 0x11B4BCu: goto label_11b4bc;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4C4u: goto label_11b4c4;
            case 0x11B4C8u: goto label_11b4c8;
            case 0x11B4CCu: goto label_11b4cc;
            case 0x11B4D0u: goto label_11b4d0;
            case 0x11B4D4u: goto label_11b4d4;
            case 0x11B4D8u: goto label_11b4d8;
            case 0x11B4DCu: goto label_11b4dc;
            case 0x11B4E0u: goto label_11b4e0;
            case 0x11B4E4u: goto label_11b4e4;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B4F0u: goto label_11b4f0;
            case 0x11B4F4u: goto label_11b4f4;
            case 0x11B4F8u: goto label_11b4f8;
            case 0x11B4FCu: goto label_11b4fc;
            case 0x11B500u: goto label_11b500;
            case 0x11B504u: goto label_11b504;
            case 0x11B508u: goto label_11b508;
            case 0x11B50Cu: goto label_11b50c;
            case 0x11B510u: goto label_11b510;
            case 0x11B514u: goto label_11b514;
            case 0x11B518u: goto label_11b518;
            case 0x11B51Cu: goto label_11b51c;
            case 0x11B520u: goto label_11b520;
            case 0x11B524u: goto label_11b524;
            case 0x11B528u: goto label_11b528;
            case 0x11B52Cu: goto label_11b52c;
            case 0x11B530u: goto label_11b530;
            case 0x11B534u: goto label_11b534;
            case 0x11B538u: goto label_11b538;
            case 0x11B53Cu: goto label_11b53c;
            case 0x11B540u: goto label_11b540;
            case 0x11B544u: goto label_11b544;
            case 0x11B548u: goto label_11b548;
            case 0x11B54Cu: goto label_11b54c;
            case 0x11B550u: goto label_11b550;
            case 0x11B554u: goto label_11b554;
            case 0x11B558u: goto label_11b558;
            case 0x11B55Cu: goto label_11b55c;
            case 0x11B560u: goto label_11b560;
            case 0x11B564u: goto label_11b564;
            case 0x11B568u: goto label_11b568;
            case 0x11B56Cu: goto label_11b56c;
            case 0x11B570u: goto label_11b570;
            case 0x11B574u: goto label_11b574;
            case 0x11B578u: goto label_11b578;
            case 0x11B57Cu: goto label_11b57c;
            case 0x11B580u: goto label_11b580;
            case 0x11B584u: goto label_11b584;
            case 0x11B588u: goto label_11b588;
            case 0x11B58Cu: goto label_11b58c;
            case 0x11B590u: goto label_11b590;
            case 0x11B594u: goto label_11b594;
            case 0x11B598u: goto label_11b598;
            case 0x11B59Cu: goto label_11b59c;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5A4u: goto label_11b5a4;
            case 0x11B5A8u: goto label_11b5a8;
            case 0x11B5ACu: goto label_11b5ac;
            case 0x11B5B0u: goto label_11b5b0;
            case 0x11B5B4u: goto label_11b5b4;
            case 0x11B5B8u: goto label_11b5b8;
            case 0x11B5BCu: goto label_11b5bc;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5C4u: goto label_11b5c4;
            case 0x11B5C8u: goto label_11b5c8;
            case 0x11B5CCu: goto label_11b5cc;
            case 0x11B5D0u: goto label_11b5d0;
            case 0x11B5D4u: goto label_11b5d4;
            case 0x11B5D8u: goto label_11b5d8;
            case 0x11B5DCu: goto label_11b5dc;
            case 0x11B5E0u: goto label_11b5e0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5E8u: goto label_11b5e8;
            case 0x11B5ECu: goto label_11b5ec;
            case 0x11B5F0u: goto label_11b5f0;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B5FCu: goto label_11b5fc;
            case 0x11B600u: goto label_11b600;
            case 0x11B604u: goto label_11b604;
            case 0x11B608u: goto label_11b608;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B610u: goto label_11b610;
            case 0x11B614u: goto label_11b614;
            case 0x11B618u: goto label_11b618;
            case 0x11B61Cu: goto label_11b61c;
            case 0x11B620u: goto label_11b620;
            case 0x11B624u: goto label_11b624;
            case 0x11B628u: goto label_11b628;
            case 0x11B62Cu: goto label_11b62c;
            case 0x11B630u: goto label_11b630;
            case 0x11B634u: goto label_11b634;
            case 0x11B638u: goto label_11b638;
            case 0x11B63Cu: goto label_11b63c;
            case 0x11B640u: goto label_11b640;
            case 0x11B644u: goto label_11b644;
            case 0x11B648u: goto label_11b648;
            case 0x11B64Cu: goto label_11b64c;
            case 0x11B650u: goto label_11b650;
            case 0x11B654u: goto label_11b654;
            case 0x11B658u: goto label_11b658;
            case 0x11B65Cu: goto label_11b65c;
            case 0x11B660u: goto label_11b660;
            case 0x11B664u: goto label_11b664;
            case 0x11B668u: goto label_11b668;
            case 0x11B66Cu: goto label_11b66c;
            case 0x11B670u: goto label_11b670;
            case 0x11B674u: goto label_11b674;
            case 0x11B678u: goto label_11b678;
            case 0x11B67Cu: goto label_11b67c;
            case 0x11B680u: goto label_11b680;
            case 0x11B684u: goto label_11b684;
            case 0x11B688u: goto label_11b688;
            case 0x11B68Cu: goto label_11b68c;
            case 0x11B690u: goto label_11b690;
            case 0x11B694u: goto label_11b694;
            case 0x11B698u: goto label_11b698;
            case 0x11B69Cu: goto label_11b69c;
            case 0x11B6A0u: goto label_11b6a0;
            case 0x11B6A4u: goto label_11b6a4;
            case 0x11B6A8u: goto label_11b6a8;
            case 0x11B6ACu: goto label_11b6ac;
            case 0x11B6B0u: goto label_11b6b0;
            case 0x11B6B4u: goto label_11b6b4;
            case 0x11B6B8u: goto label_11b6b8;
            case 0x11B6BCu: goto label_11b6bc;
            case 0x11B6C0u: goto label_11b6c0;
            case 0x11B6C4u: goto label_11b6c4;
            case 0x11B6C8u: goto label_11b6c8;
            case 0x11B6CCu: goto label_11b6cc;
            case 0x11B6D0u: goto label_11b6d0;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6DCu: goto label_11b6dc;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B6E4u: goto label_11b6e4;
            case 0x11B6E8u: goto label_11b6e8;
            case 0x11B6ECu: goto label_11b6ec;
            case 0x11B6F0u: goto label_11b6f0;
            case 0x11B6F4u: goto label_11b6f4;
            case 0x11B6F8u: goto label_11b6f8;
            case 0x11B6FCu: goto label_11b6fc;
            case 0x11B700u: goto label_11b700;
            case 0x11B704u: goto label_11b704;
            case 0x11B708u: goto label_11b708;
            case 0x11B70Cu: goto label_11b70c;
            case 0x11B710u: goto label_11b710;
            case 0x11B714u: goto label_11b714;
            case 0x11B718u: goto label_11b718;
            case 0x11B71Cu: goto label_11b71c;
            case 0x11B720u: goto label_11b720;
            case 0x11B724u: goto label_11b724;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B730u: goto label_11b730;
            case 0x11B734u: goto label_11b734;
            case 0x11B738u: goto label_11b738;
            case 0x11B73Cu: goto label_11b73c;
            case 0x11B740u: goto label_11b740;
            case 0x11B744u: goto label_11b744;
            case 0x11B748u: goto label_11b748;
            case 0x11B74Cu: goto label_11b74c;
            case 0x11B750u: goto label_11b750;
            case 0x11B754u: goto label_11b754;
            case 0x11B758u: goto label_11b758;
            case 0x11B75Cu: goto label_11b75c;
            case 0x11B760u: goto label_11b760;
            case 0x11B764u: goto label_11b764;
            case 0x11B768u: goto label_11b768;
            case 0x11B76Cu: goto label_11b76c;
            case 0x11B770u: goto label_11b770;
            case 0x11B774u: goto label_11b774;
            case 0x11B778u: goto label_11b778;
            case 0x11B77Cu: goto label_11b77c;
            case 0x11B780u: goto label_11b780;
            case 0x11B784u: goto label_11b784;
            case 0x11B788u: goto label_11b788;
            case 0x11B78Cu: goto label_11b78c;
            case 0x11B790u: goto label_11b790;
            case 0x11B794u: goto label_11b794;
            case 0x11B798u: goto label_11b798;
            case 0x11B79Cu: goto label_11b79c;
            case 0x11B7A0u: goto label_11b7a0;
            case 0x11B7A4u: goto label_11b7a4;
            case 0x11B7A8u: goto label_11b7a8;
            case 0x11B7ACu: goto label_11b7ac;
            case 0x11B7B0u: goto label_11b7b0;
            case 0x11B7B4u: goto label_11b7b4;
            case 0x11B7B8u: goto label_11b7b8;
            case 0x11B7BCu: goto label_11b7bc;
            case 0x11B7C0u: goto label_11b7c0;
            case 0x11B7C4u: goto label_11b7c4;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B7CCu: goto label_11b7cc;
            case 0x11B7D0u: goto label_11b7d0;
            case 0x11B7D4u: goto label_11b7d4;
            case 0x11B7D8u: goto label_11b7d8;
            case 0x11B7DCu: goto label_11b7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B5A0u;
label_11b5a0:
    // 0x11b5a0: 0xdee20000  ld          $v0, 0x0($s7)
    ctx->pc = 0x11b5a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 0)));
label_11b5a4:
    // 0x11b5a4: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x11b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_11b5a8:
    // 0x11b5a8: 0x32063fff  andi        $a2, $s0, 0x3FFF
    ctx->pc = 0x11b5a8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b5ac:
    // 0x11b5ac: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x11b5acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b5b0:
    // 0x11b5b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11b5b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_11b5b4:
    // 0x11b5b4: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x11b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
label_11b5b8:
    // 0x11b5b8: 0x34a53fff  ori         $a1, $a1, 0x3FFF
    ctx->pc = 0x11b5b8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16383u)));
label_11b5bc:
    // 0x11b5bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x11b5bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_11b5c0:
    // 0x11b5c0: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x11b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_11b5c4:
    // 0x11b5c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x11b5c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_11b5c8:
    // 0x11b5c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11b5c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_11b5cc:
    // 0x11b5cc: 0x10000061  b           . + 4 + (0x61 << 2)
label_11b5d0:
    if (ctx->pc == 0x11B5D0u) {
        ctx->pc = 0x11B5D0u;
            // 0x11b5d0: 0xfee20000  sd          $v0, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x11B5D4u;
        goto label_11b5d4;
    }
    ctx->pc = 0x11B5CCu;
    {
        const bool branch_taken_0x11b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5CCu;
            // 0x11b5d0: 0xfee20000  sd          $v0, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5cc) {
            ctx->pc = 0x11B754u;
            goto label_11b754;
        }
    }
    ctx->pc = 0x11B5D4u;
label_11b5d4:
    // 0x11b5d4: 0xdee30000  ld          $v1, 0x0($s7)
    ctx->pc = 0x11b5d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 0)));
label_11b5d8:
    // 0x11b5d8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_11b5dc:
    // 0x11b5dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b5e0:
    // 0x11b5e0: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x11b5e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
label_11b5e4:
    // 0x11b5e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b5e8:
    // 0x11b5e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b5e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b5ec:
    // 0x11b5ec: 0x32043fff  andi        $a0, $s0, 0x3FFF
    ctx->pc = 0x11b5ecu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b5f0:
    // 0x11b5f0: 0x3225003f  andi        $a1, $s1, 0x3F
    ctx->pc = 0x11b5f0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b5f4:
    // 0x11b5f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b5f4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b5f8:
    // 0x11b5f8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x11b5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_11b5fc:
    // 0x11b5fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11b5fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b600:
    // 0x11b600: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
label_11b604:
    // 0x11b604: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b608:
    // 0x11b608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b608u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b60c:
    // 0x11b60c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b610:
    // 0x11b610: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b610u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b614:
    // 0x11b614: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b614u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b618:
    // 0x11b618: 0x10000015  b           . + 4 + (0x15 << 2)
label_11b61c:
    if (ctx->pc == 0x11B61Cu) {
        ctx->pc = 0x11B61Cu;
            // 0x11b61c: 0x528bc  dsll32      $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
        ctx->pc = 0x11B620u;
        goto label_11b620;
    }
    ctx->pc = 0x11B618u;
    {
        const bool branch_taken_0x11b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B618u;
            // 0x11b61c: 0x528bc  dsll32      $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b618) {
            ctx->pc = 0x11B670u;
            goto label_11b670;
        }
    }
    ctx->pc = 0x11B620u;
label_11b620:
    // 0x11b620: 0xdee30000  ld          $v1, 0x0($s7)
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 0)));
label_11b624:
    // 0x11b624: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x11b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
label_11b628:
    // 0x11b628: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x11b628u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
label_11b62c:
    // 0x11b62c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b630:
    // 0x11b630: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b630u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b634:
    // 0x11b634: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b638:
    // 0x11b638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b638u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b63c:
    // 0x11b63c: 0x32043fff  andi        $a0, $s0, 0x3FFF
    ctx->pc = 0x11b63cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b640:
    // 0x11b640: 0x3225003f  andi        $a1, $s1, 0x3F
    ctx->pc = 0x11b640u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b644:
    // 0x11b644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b644u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b648:
    // 0x11b648: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
label_11b64c:
    // 0x11b64c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11b64cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b650:
    // 0x11b650: 0x3c02f03f  lui         $v0, 0xF03F
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61503 << 16));
label_11b654:
    // 0x11b654: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b654u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b658:
    // 0x11b658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b65c:
    // 0x11b65c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b65cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b660:
    // 0x11b660: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b664:
    // 0x11b664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b664u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b668:
    // 0x11b668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b668u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b66c:
    // 0x11b66c: 0x52dbc  dsll32      $a1, $a1, 22
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 22));
label_11b670:
    // 0x11b670: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11b670u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_11b674:
    // 0x11b674: 0x10000037  b           . + 4 + (0x37 << 2)
label_11b678:
    if (ctx->pc == 0x11B678u) {
        ctx->pc = 0x11B678u;
            // 0x11b678: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->pc = 0x11B67Cu;
        goto label_11b67c;
    }
    ctx->pc = 0x11B674u;
    {
        const bool branch_taken_0x11b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B674u;
            // 0x11b678: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b674) {
            ctx->pc = 0x11B754u;
            goto label_11b754;
        }
    }
    ctx->pc = 0x11B67Cu;
label_11b67c:
    // 0x11b67c: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x11b67cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_11b680:
    // 0x11b680: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_11b684:
    // 0x11b684: 0x32063fff  andi        $a2, $s0, 0x3FFF
    ctx->pc = 0x11b684u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b688:
    // 0x11b688: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x11b688u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b68c:
    // 0x11b68c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11b68cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_11b690:
    // 0x11b690: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x11b690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
label_11b694:
    // 0x11b694: 0x34a53fff  ori         $a1, $a1, 0x3FFF
    ctx->pc = 0x11b694u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16383u)));
label_11b698:
    // 0x11b698: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x11b698u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_11b69c:
    // 0x11b69c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x11b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_11b6a0:
    // 0x11b6a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x11b6a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_11b6a4:
    // 0x11b6a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11b6a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_11b6a8:
    // 0x11b6a8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_11b6ac:
    if (ctx->pc == 0x11B6ACu) {
        ctx->pc = 0x11B6ACu;
            // 0x11b6ac: 0xfec20000  sd          $v0, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x11B6B0u;
        goto label_11b6b0;
    }
    ctx->pc = 0x11B6A8u;
    {
        const bool branch_taken_0x11b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6A8u;
            // 0x11b6ac: 0xfec20000  sd          $v0, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a8) {
            ctx->pc = 0x11B754u;
            goto label_11b754;
        }
    }
    ctx->pc = 0x11B6B0u;
label_11b6b0:
    // 0x11b6b0: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x11b6b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_11b6b4:
    // 0x11b6b4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x11b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_11b6b8:
    // 0x11b6b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b6bc:
    // 0x11b6bc: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x11b6bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
label_11b6c0:
    // 0x11b6c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b6c4:
    // 0x11b6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b6c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b6c8:
    // 0x11b6c8: 0x32043fff  andi        $a0, $s0, 0x3FFF
    ctx->pc = 0x11b6c8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b6cc:
    // 0x11b6cc: 0x3225003f  andi        $a1, $s1, 0x3F
    ctx->pc = 0x11b6ccu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b6d0:
    // 0x11b6d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b6d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b6d4:
    // 0x11b6d4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x11b6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
label_11b6d8:
    // 0x11b6d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11b6d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b6dc:
    // 0x11b6dc: 0x2402ff03  addiu       $v0, $zero, -0xFD
    ctx->pc = 0x11b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967043));
label_11b6e0:
    // 0x11b6e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b6e4:
    // 0x11b6e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b6e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b6e8:
    // 0x11b6e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b6ec:
    // 0x11b6ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b6ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b6f0:
    // 0x11b6f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b6f0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b6f4:
    // 0x11b6f4: 0x10000015  b           . + 4 + (0x15 << 2)
label_11b6f8:
    if (ctx->pc == 0x11B6F8u) {
        ctx->pc = 0x11B6F8u;
            // 0x11b6f8: 0x528bc  dsll32      $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
        ctx->pc = 0x11B6FCu;
        goto label_11b6fc;
    }
    ctx->pc = 0x11B6F4u;
    {
        const bool branch_taken_0x11b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6F4u;
            // 0x11b6f8: 0x528bc  dsll32      $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6f4) {
            ctx->pc = 0x11B74Cu;
            goto label_11b74c;
        }
    }
    ctx->pc = 0x11B6FCu;
label_11b6fc:
    // 0x11b6fc: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_11b700:
    // 0x11b700: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x11b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
label_11b704:
    // 0x11b704: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x11b704u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
label_11b708:
    // 0x11b708: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b70c:
    // 0x11b70c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b70cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b710:
    // 0x11b710: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b714:
    // 0x11b714: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b714u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b718:
    // 0x11b718: 0x32043fff  andi        $a0, $s0, 0x3FFF
    ctx->pc = 0x11b718u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_11b71c:
    // 0x11b71c: 0x3225003f  andi        $a1, $s1, 0x3F
    ctx->pc = 0x11b71cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
label_11b720:
    // 0x11b720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b720u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b724:
    // 0x11b724: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x11b724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
label_11b728:
    // 0x11b728: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11b728u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b72c:
    // 0x11b72c: 0x3c02f03f  lui         $v0, 0xF03F
    ctx->pc = 0x11b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61503 << 16));
label_11b730:
    // 0x11b730: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b734:
    // 0x11b734: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b738:
    // 0x11b738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b738u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b73c:
    // 0x11b73c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_11b740:
    // 0x11b740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b740u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11b744:
    // 0x11b744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b744u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b748:
    // 0x11b748: 0x52dbc  dsll32      $a1, $a1, 22
    ctx->pc = 0x11b748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 22));
label_11b74c:
    // 0x11b74c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11b74cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_11b750:
    // 0x11b750: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x11b750u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_11b754:
    // 0x11b754: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x11b754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_11b758:
    // 0x11b758: 0x2405fe3f  addiu       $a1, $zero, -0x1C1
    ctx->pc = 0x11b758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_11b75c:
    // 0x11b75c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11b75cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11b760:
    // 0x11b760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b764:
    // 0x11b764: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x11b764u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7u)));
label_11b768:
    // 0x11b768: 0x2404ffe3  addiu       $a0, $zero, -0x1D
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_11b76c:
    // 0x11b76c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x11b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_11b770:
    // 0x11b770: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11b770u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b774:
    // 0x11b774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11b774u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_11b778:
    // 0x11b778: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x11b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_11b77c:
    // 0x11b77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b780:
    // 0x11b780: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11b780u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_11b784:
    // 0x11b784: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11b784u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11b788:
    // 0x11b788: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11b78c:
    // 0x11b78c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x11b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_11b790:
    // 0x11b790: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x11b790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_11b794:
    // 0x11b794: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x11b794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_11b798:
    // 0x11b798: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11b79c:
    // 0x11b79c: 0x93c20011  lbu         $v0, 0x11($fp)
    ctx->pc = 0x11b79cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
label_11b7a0:
    // 0x11b7a0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11b7a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11b7a4:
    // 0x11b7a4: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
label_11b7a8:
    if (ctx->pc == 0x11B7A8u) {
        ctx->pc = 0x11B7A8u;
            // 0x11b7a8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11B7ACu;
        goto label_11b7ac;
    }
    ctx->pc = 0x11B7A4u;
    {
        const bool branch_taken_0x11b7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7A4u;
            // 0x11b7a8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7a4) {
            ctx->pc = 0x11B4A8u;
            goto label_11b4a8;
        }
    }
    ctx->pc = 0x11B7ACu;
label_11b7ac:
    // 0x11b7ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b7b0:
    // 0x11b7b0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x11b7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_11b7b4:
    // 0x11b7b4: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x11b7b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_11b7b8:
    // 0x11b7b8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x11b7b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_11b7bc:
    // 0x11b7bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11b7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11b7c0:
    // 0x11b7c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x11b7c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11b7c4:
    // 0x11b7c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11b7c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11b7c8:
    // 0x11b7c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11b7c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11b7cc:
    // 0x11b7cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11b7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11b7d0:
    // 0x11b7d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11b7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11b7d4:
    // 0x11b7d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11b7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11b7d8:
    // 0x11b7d8: 0x3e00008  jr          $ra
label_11b7dc:
    if (ctx->pc == 0x11B7DCu) {
        ctx->pc = 0x11B7DCu;
            // 0x11b7dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x11B7E0u;
        goto label_fallthrough_0x11b7d8;
    }
    ctx->pc = 0x11B7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7D8u;
            // 0x11b7dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B1F8u: goto label_11b1f8;
            case 0x11B1FCu: goto label_11b1fc;
            case 0x11B200u: goto label_11b200;
            case 0x11B204u: goto label_11b204;
            case 0x11B208u: goto label_11b208;
            case 0x11B20Cu: goto label_11b20c;
            case 0x11B210u: goto label_11b210;
            case 0x11B214u: goto label_11b214;
            case 0x11B218u: goto label_11b218;
            case 0x11B21Cu: goto label_11b21c;
            case 0x11B220u: goto label_11b220;
            case 0x11B224u: goto label_11b224;
            case 0x11B228u: goto label_11b228;
            case 0x11B22Cu: goto label_11b22c;
            case 0x11B230u: goto label_11b230;
            case 0x11B234u: goto label_11b234;
            case 0x11B238u: goto label_11b238;
            case 0x11B23Cu: goto label_11b23c;
            case 0x11B240u: goto label_11b240;
            case 0x11B244u: goto label_11b244;
            case 0x11B248u: goto label_11b248;
            case 0x11B24Cu: goto label_11b24c;
            case 0x11B250u: goto label_11b250;
            case 0x11B254u: goto label_11b254;
            case 0x11B258u: goto label_11b258;
            case 0x11B25Cu: goto label_11b25c;
            case 0x11B260u: goto label_11b260;
            case 0x11B264u: goto label_11b264;
            case 0x11B268u: goto label_11b268;
            case 0x11B26Cu: goto label_11b26c;
            case 0x11B270u: goto label_11b270;
            case 0x11B274u: goto label_11b274;
            case 0x11B278u: goto label_11b278;
            case 0x11B27Cu: goto label_11b27c;
            case 0x11B280u: goto label_11b280;
            case 0x11B284u: goto label_11b284;
            case 0x11B288u: goto label_11b288;
            case 0x11B28Cu: goto label_11b28c;
            case 0x11B290u: goto label_11b290;
            case 0x11B294u: goto label_11b294;
            case 0x11B298u: goto label_11b298;
            case 0x11B29Cu: goto label_11b29c;
            case 0x11B2A0u: goto label_11b2a0;
            case 0x11B2A4u: goto label_11b2a4;
            case 0x11B2A8u: goto label_11b2a8;
            case 0x11B2ACu: goto label_11b2ac;
            case 0x11B2B0u: goto label_11b2b0;
            case 0x11B2B4u: goto label_11b2b4;
            case 0x11B2B8u: goto label_11b2b8;
            case 0x11B2BCu: goto label_11b2bc;
            case 0x11B2C0u: goto label_11b2c0;
            case 0x11B2C4u: goto label_11b2c4;
            case 0x11B2C8u: goto label_11b2c8;
            case 0x11B2CCu: goto label_11b2cc;
            case 0x11B2D0u: goto label_11b2d0;
            case 0x11B2D4u: goto label_11b2d4;
            case 0x11B2D8u: goto label_11b2d8;
            case 0x11B2DCu: goto label_11b2dc;
            case 0x11B2E0u: goto label_11b2e0;
            case 0x11B2E4u: goto label_11b2e4;
            case 0x11B2E8u: goto label_11b2e8;
            case 0x11B2ECu: goto label_11b2ec;
            case 0x11B2F0u: goto label_11b2f0;
            case 0x11B2F4u: goto label_11b2f4;
            case 0x11B2F8u: goto label_11b2f8;
            case 0x11B2FCu: goto label_11b2fc;
            case 0x11B300u: goto label_11b300;
            case 0x11B304u: goto label_11b304;
            case 0x11B308u: goto label_11b308;
            case 0x11B30Cu: goto label_11b30c;
            case 0x11B310u: goto label_11b310;
            case 0x11B314u: goto label_11b314;
            case 0x11B318u: goto label_11b318;
            case 0x11B31Cu: goto label_11b31c;
            case 0x11B320u: goto label_11b320;
            case 0x11B324u: goto label_11b324;
            case 0x11B328u: goto label_11b328;
            case 0x11B32Cu: goto label_11b32c;
            case 0x11B330u: goto label_11b330;
            case 0x11B334u: goto label_11b334;
            case 0x11B338u: goto label_11b338;
            case 0x11B33Cu: goto label_11b33c;
            case 0x11B340u: goto label_11b340;
            case 0x11B344u: goto label_11b344;
            case 0x11B348u: goto label_11b348;
            case 0x11B34Cu: goto label_11b34c;
            case 0x11B350u: goto label_11b350;
            case 0x11B354u: goto label_11b354;
            case 0x11B358u: goto label_11b358;
            case 0x11B35Cu: goto label_11b35c;
            case 0x11B360u: goto label_11b360;
            case 0x11B364u: goto label_11b364;
            case 0x11B368u: goto label_11b368;
            case 0x11B36Cu: goto label_11b36c;
            case 0x11B370u: goto label_11b370;
            case 0x11B374u: goto label_11b374;
            case 0x11B378u: goto label_11b378;
            case 0x11B37Cu: goto label_11b37c;
            case 0x11B380u: goto label_11b380;
            case 0x11B384u: goto label_11b384;
            case 0x11B388u: goto label_11b388;
            case 0x11B38Cu: goto label_11b38c;
            case 0x11B390u: goto label_11b390;
            case 0x11B394u: goto label_11b394;
            case 0x11B398u: goto label_11b398;
            case 0x11B39Cu: goto label_11b39c;
            case 0x11B3A0u: goto label_11b3a0;
            case 0x11B3A4u: goto label_11b3a4;
            case 0x11B3A8u: goto label_11b3a8;
            case 0x11B3ACu: goto label_11b3ac;
            case 0x11B3B0u: goto label_11b3b0;
            case 0x11B3B4u: goto label_11b3b4;
            case 0x11B3B8u: goto label_11b3b8;
            case 0x11B3BCu: goto label_11b3bc;
            case 0x11B3C0u: goto label_11b3c0;
            case 0x11B3C4u: goto label_11b3c4;
            case 0x11B3C8u: goto label_11b3c8;
            case 0x11B3CCu: goto label_11b3cc;
            case 0x11B3D0u: goto label_11b3d0;
            case 0x11B3D4u: goto label_11b3d4;
            case 0x11B3D8u: goto label_11b3d8;
            case 0x11B3DCu: goto label_11b3dc;
            case 0x11B3E0u: goto label_11b3e0;
            case 0x11B3E4u: goto label_11b3e4;
            case 0x11B3E8u: goto label_11b3e8;
            case 0x11B3ECu: goto label_11b3ec;
            case 0x11B3F0u: goto label_11b3f0;
            case 0x11B3F4u: goto label_11b3f4;
            case 0x11B3F8u: goto label_11b3f8;
            case 0x11B3FCu: goto label_11b3fc;
            case 0x11B400u: goto label_11b400;
            case 0x11B404u: goto label_11b404;
            case 0x11B408u: goto label_11b408;
            case 0x11B40Cu: goto label_11b40c;
            case 0x11B410u: goto label_11b410;
            case 0x11B414u: goto label_11b414;
            case 0x11B418u: goto label_11b418;
            case 0x11B41Cu: goto label_11b41c;
            case 0x11B420u: goto label_11b420;
            case 0x11B424u: goto label_11b424;
            case 0x11B428u: goto label_11b428;
            case 0x11B42Cu: goto label_11b42c;
            case 0x11B430u: goto label_11b430;
            case 0x11B434u: goto label_11b434;
            case 0x11B438u: goto label_11b438;
            case 0x11B43Cu: goto label_11b43c;
            case 0x11B440u: goto label_11b440;
            case 0x11B444u: goto label_11b444;
            case 0x11B448u: goto label_11b448;
            case 0x11B44Cu: goto label_11b44c;
            case 0x11B450u: goto label_11b450;
            case 0x11B454u: goto label_11b454;
            case 0x11B458u: goto label_11b458;
            case 0x11B45Cu: goto label_11b45c;
            case 0x11B460u: goto label_11b460;
            case 0x11B464u: goto label_11b464;
            case 0x11B468u: goto label_11b468;
            case 0x11B46Cu: goto label_11b46c;
            case 0x11B470u: goto label_11b470;
            case 0x11B474u: goto label_11b474;
            case 0x11B478u: goto label_11b478;
            case 0x11B47Cu: goto label_11b47c;
            case 0x11B480u: goto label_11b480;
            case 0x11B484u: goto label_11b484;
            case 0x11B488u: goto label_11b488;
            case 0x11B48Cu: goto label_11b48c;
            case 0x11B490u: goto label_11b490;
            case 0x11B494u: goto label_11b494;
            case 0x11B498u: goto label_11b498;
            case 0x11B49Cu: goto label_11b49c;
            case 0x11B4A0u: goto label_11b4a0;
            case 0x11B4A4u: goto label_11b4a4;
            case 0x11B4A8u: goto label_11b4a8;
            case 0x11B4ACu: goto label_11b4ac;
            case 0x11B4B0u: goto label_11b4b0;
            case 0x11B4B4u: goto label_11b4b4;
            case 0x11B4B8u: goto label_11b4b8;
            case 0x11B4BCu: goto label_11b4bc;
            case 0x11B4C0u: goto label_11b4c0;
            case 0x11B4C4u: goto label_11b4c4;
            case 0x11B4C8u: goto label_11b4c8;
            case 0x11B4CCu: goto label_11b4cc;
            case 0x11B4D0u: goto label_11b4d0;
            case 0x11B4D4u: goto label_11b4d4;
            case 0x11B4D8u: goto label_11b4d8;
            case 0x11B4DCu: goto label_11b4dc;
            case 0x11B4E0u: goto label_11b4e0;
            case 0x11B4E4u: goto label_11b4e4;
            case 0x11B4E8u: goto label_11b4e8;
            case 0x11B4ECu: goto label_11b4ec;
            case 0x11B4F0u: goto label_11b4f0;
            case 0x11B4F4u: goto label_11b4f4;
            case 0x11B4F8u: goto label_11b4f8;
            case 0x11B4FCu: goto label_11b4fc;
            case 0x11B500u: goto label_11b500;
            case 0x11B504u: goto label_11b504;
            case 0x11B508u: goto label_11b508;
            case 0x11B50Cu: goto label_11b50c;
            case 0x11B510u: goto label_11b510;
            case 0x11B514u: goto label_11b514;
            case 0x11B518u: goto label_11b518;
            case 0x11B51Cu: goto label_11b51c;
            case 0x11B520u: goto label_11b520;
            case 0x11B524u: goto label_11b524;
            case 0x11B528u: goto label_11b528;
            case 0x11B52Cu: goto label_11b52c;
            case 0x11B530u: goto label_11b530;
            case 0x11B534u: goto label_11b534;
            case 0x11B538u: goto label_11b538;
            case 0x11B53Cu: goto label_11b53c;
            case 0x11B540u: goto label_11b540;
            case 0x11B544u: goto label_11b544;
            case 0x11B548u: goto label_11b548;
            case 0x11B54Cu: goto label_11b54c;
            case 0x11B550u: goto label_11b550;
            case 0x11B554u: goto label_11b554;
            case 0x11B558u: goto label_11b558;
            case 0x11B55Cu: goto label_11b55c;
            case 0x11B560u: goto label_11b560;
            case 0x11B564u: goto label_11b564;
            case 0x11B568u: goto label_11b568;
            case 0x11B56Cu: goto label_11b56c;
            case 0x11B570u: goto label_11b570;
            case 0x11B574u: goto label_11b574;
            case 0x11B578u: goto label_11b578;
            case 0x11B57Cu: goto label_11b57c;
            case 0x11B580u: goto label_11b580;
            case 0x11B584u: goto label_11b584;
            case 0x11B588u: goto label_11b588;
            case 0x11B58Cu: goto label_11b58c;
            case 0x11B590u: goto label_11b590;
            case 0x11B594u: goto label_11b594;
            case 0x11B598u: goto label_11b598;
            case 0x11B59Cu: goto label_11b59c;
            case 0x11B5A0u: goto label_11b5a0;
            case 0x11B5A4u: goto label_11b5a4;
            case 0x11B5A8u: goto label_11b5a8;
            case 0x11B5ACu: goto label_11b5ac;
            case 0x11B5B0u: goto label_11b5b0;
            case 0x11B5B4u: goto label_11b5b4;
            case 0x11B5B8u: goto label_11b5b8;
            case 0x11B5BCu: goto label_11b5bc;
            case 0x11B5C0u: goto label_11b5c0;
            case 0x11B5C4u: goto label_11b5c4;
            case 0x11B5C8u: goto label_11b5c8;
            case 0x11B5CCu: goto label_11b5cc;
            case 0x11B5D0u: goto label_11b5d0;
            case 0x11B5D4u: goto label_11b5d4;
            case 0x11B5D8u: goto label_11b5d8;
            case 0x11B5DCu: goto label_11b5dc;
            case 0x11B5E0u: goto label_11b5e0;
            case 0x11B5E4u: goto label_11b5e4;
            case 0x11B5E8u: goto label_11b5e8;
            case 0x11B5ECu: goto label_11b5ec;
            case 0x11B5F0u: goto label_11b5f0;
            case 0x11B5F4u: goto label_11b5f4;
            case 0x11B5F8u: goto label_11b5f8;
            case 0x11B5FCu: goto label_11b5fc;
            case 0x11B600u: goto label_11b600;
            case 0x11B604u: goto label_11b604;
            case 0x11B608u: goto label_11b608;
            case 0x11B60Cu: goto label_11b60c;
            case 0x11B610u: goto label_11b610;
            case 0x11B614u: goto label_11b614;
            case 0x11B618u: goto label_11b618;
            case 0x11B61Cu: goto label_11b61c;
            case 0x11B620u: goto label_11b620;
            case 0x11B624u: goto label_11b624;
            case 0x11B628u: goto label_11b628;
            case 0x11B62Cu: goto label_11b62c;
            case 0x11B630u: goto label_11b630;
            case 0x11B634u: goto label_11b634;
            case 0x11B638u: goto label_11b638;
            case 0x11B63Cu: goto label_11b63c;
            case 0x11B640u: goto label_11b640;
            case 0x11B644u: goto label_11b644;
            case 0x11B648u: goto label_11b648;
            case 0x11B64Cu: goto label_11b64c;
            case 0x11B650u: goto label_11b650;
            case 0x11B654u: goto label_11b654;
            case 0x11B658u: goto label_11b658;
            case 0x11B65Cu: goto label_11b65c;
            case 0x11B660u: goto label_11b660;
            case 0x11B664u: goto label_11b664;
            case 0x11B668u: goto label_11b668;
            case 0x11B66Cu: goto label_11b66c;
            case 0x11B670u: goto label_11b670;
            case 0x11B674u: goto label_11b674;
            case 0x11B678u: goto label_11b678;
            case 0x11B67Cu: goto label_11b67c;
            case 0x11B680u: goto label_11b680;
            case 0x11B684u: goto label_11b684;
            case 0x11B688u: goto label_11b688;
            case 0x11B68Cu: goto label_11b68c;
            case 0x11B690u: goto label_11b690;
            case 0x11B694u: goto label_11b694;
            case 0x11B698u: goto label_11b698;
            case 0x11B69Cu: goto label_11b69c;
            case 0x11B6A0u: goto label_11b6a0;
            case 0x11B6A4u: goto label_11b6a4;
            case 0x11B6A8u: goto label_11b6a8;
            case 0x11B6ACu: goto label_11b6ac;
            case 0x11B6B0u: goto label_11b6b0;
            case 0x11B6B4u: goto label_11b6b4;
            case 0x11B6B8u: goto label_11b6b8;
            case 0x11B6BCu: goto label_11b6bc;
            case 0x11B6C0u: goto label_11b6c0;
            case 0x11B6C4u: goto label_11b6c4;
            case 0x11B6C8u: goto label_11b6c8;
            case 0x11B6CCu: goto label_11b6cc;
            case 0x11B6D0u: goto label_11b6d0;
            case 0x11B6D4u: goto label_11b6d4;
            case 0x11B6D8u: goto label_11b6d8;
            case 0x11B6DCu: goto label_11b6dc;
            case 0x11B6E0u: goto label_11b6e0;
            case 0x11B6E4u: goto label_11b6e4;
            case 0x11B6E8u: goto label_11b6e8;
            case 0x11B6ECu: goto label_11b6ec;
            case 0x11B6F0u: goto label_11b6f0;
            case 0x11B6F4u: goto label_11b6f4;
            case 0x11B6F8u: goto label_11b6f8;
            case 0x11B6FCu: goto label_11b6fc;
            case 0x11B700u: goto label_11b700;
            case 0x11B704u: goto label_11b704;
            case 0x11B708u: goto label_11b708;
            case 0x11B70Cu: goto label_11b70c;
            case 0x11B710u: goto label_11b710;
            case 0x11B714u: goto label_11b714;
            case 0x11B718u: goto label_11b718;
            case 0x11B71Cu: goto label_11b71c;
            case 0x11B720u: goto label_11b720;
            case 0x11B724u: goto label_11b724;
            case 0x11B728u: goto label_11b728;
            case 0x11B72Cu: goto label_11b72c;
            case 0x11B730u: goto label_11b730;
            case 0x11B734u: goto label_11b734;
            case 0x11B738u: goto label_11b738;
            case 0x11B73Cu: goto label_11b73c;
            case 0x11B740u: goto label_11b740;
            case 0x11B744u: goto label_11b744;
            case 0x11B748u: goto label_11b748;
            case 0x11B74Cu: goto label_11b74c;
            case 0x11B750u: goto label_11b750;
            case 0x11B754u: goto label_11b754;
            case 0x11B758u: goto label_11b758;
            case 0x11B75Cu: goto label_11b75c;
            case 0x11B760u: goto label_11b760;
            case 0x11B764u: goto label_11b764;
            case 0x11B768u: goto label_11b768;
            case 0x11B76Cu: goto label_11b76c;
            case 0x11B770u: goto label_11b770;
            case 0x11B774u: goto label_11b774;
            case 0x11B778u: goto label_11b778;
            case 0x11B77Cu: goto label_11b77c;
            case 0x11B780u: goto label_11b780;
            case 0x11B784u: goto label_11b784;
            case 0x11B788u: goto label_11b788;
            case 0x11B78Cu: goto label_11b78c;
            case 0x11B790u: goto label_11b790;
            case 0x11B794u: goto label_11b794;
            case 0x11B798u: goto label_11b798;
            case 0x11B79Cu: goto label_11b79c;
            case 0x11B7A0u: goto label_11b7a0;
            case 0x11B7A4u: goto label_11b7a4;
            case 0x11B7A8u: goto label_11b7a8;
            case 0x11B7ACu: goto label_11b7ac;
            case 0x11B7B0u: goto label_11b7b0;
            case 0x11B7B4u: goto label_11b7b4;
            case 0x11B7B8u: goto label_11b7b8;
            case 0x11B7BCu: goto label_11b7bc;
            case 0x11B7C0u: goto label_11b7c0;
            case 0x11B7C4u: goto label_11b7c4;
            case 0x11B7C8u: goto label_11b7c8;
            case 0x11B7CCu: goto label_11b7cc;
            case 0x11B7D0u: goto label_11b7d0;
            case 0x11B7D4u: goto label_11b7d4;
            case 0x11B7D8u: goto label_11b7d8;
            case 0x11B7DCu: goto label_11b7dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x11b7d8:
    ctx->pc = 0x11B7E0u;
}
