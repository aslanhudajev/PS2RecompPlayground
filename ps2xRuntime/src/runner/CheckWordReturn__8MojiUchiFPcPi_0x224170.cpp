#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CheckWordReturn__8MojiUchiFPcPi
// Address: 0x224170 - 0x2242cc
void CheckWordReturn__8MojiUchiFPcPi_0x224170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CheckWordReturn__8MojiUchiFPcPi");


    ctx->pc = 0x224170u;

    // 0x224170: 0x27bdff70
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x224174: 0x7fbf0080
    ctx->pc = 0x224174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x224178: 0x7fb70070
    ctx->pc = 0x224178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22417c: 0x7fb60060
    ctx->pc = 0x22417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x224180: 0x7fb50050
    ctx->pc = 0x224180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x224184: 0x7fb40040
    ctx->pc = 0x224184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x224188: 0x7fb30030
    ctx->pc = 0x224188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22418c: 0x7fb20020
    ctx->pc = 0x22418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x224190: 0x7fb10010
    ctx->pc = 0x224190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224194: 0x7fb00000
    ctx->pc = 0x224194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224198: 0x3c010050
    ctx->pc = 0x224198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x22419c: 0x8023fec5
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2241a0: 0x7080b628
    ctx->pc = 0x2241a0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2241a4: 0x8c841024
    ctx->pc = 0x2241a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x2241a8: 0x70a0ae28
    ctx->pc = 0x2241a8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2241ac: 0x70c0a628
    ctx->pc = 0x2241acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2241b0: 0x70008628
    ctx->pc = 0x2241b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2241b4: 0x310c0
    ctx->pc = 0x2241b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2241b8: 0x431021
    ctx->pc = 0x2241b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2241bc: 0x21080
    ctx->pc = 0x2241bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2241c0: 0x441021
    ctx->pc = 0x2241c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2241c4: 0x8c570008
    ctx->pc = 0x2241c4u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2241c8: 0x70008e28
    ctx->pc = 0x2241c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2241cc: 0x10000030
    ctx->pc = 0x2241CCu;
    {
        const bool branch_taken_0x2241cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2241D0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2241cc) {
            ctx->pc = 0x224290u;
            goto label_224290;
        }
    }
    ctx->pc = 0x2241D4u;
label_2241d4:
    // 0x2241d4: 0x2403ffff
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2241d8: 0x2829821
    ctx->pc = 0x2241d8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2241dc: 0xae630000
    ctx->pc = 0x2241dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2241e0: 0x72c02628
    ctx->pc = 0x2241e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2241e4: 0xc08902c
    ctx->pc = 0x2241E4u;
    SET_GPR_U32(ctx, 31, 0x2241ECu);
    ctx->pc = 0x2241E8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2240B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCode2__8MojiUchiFPCc_0x2240b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241ECu; }
        else if (ctx->pc != 0x2241ECu) { ctx->pc = 0x2241ECu; }
    }
    if (ctx->pc != 0x2241ECu) { return; }
    ctx->pc = 0x2241ECu;
    // 0x2241ec: 0x2403ffff
    ctx->pc = 0x2241ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2241f0: 0x10430003
    ctx->pc = 0x2241F0u;
    {
        const bool branch_taken_0x2241f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2241F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2241f0) {
            ctx->pc = 0x224200u;
            goto label_224200;
        }
    }
    ctx->pc = 0x2241F8u;
    // 0x2241f8: 0x1443000c
    ctx->pc = 0x2241F8u;
    {
        const bool branch_taken_0x2241f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2241FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x2241f8) {
            ctx->pc = 0x22422Cu;
            goto label_22422c;
        }
    }
    ctx->pc = 0x224200u;
label_224200:
    // 0x224200: 0x52000007
    ctx->pc = 0x224200u;
    {
        const bool branch_taken_0x224200 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x224200) {
            ctx->pc = 0x224204u;
            SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x224220u;
            goto label_224220;
        }
    }
    ctx->pc = 0x224208u;
    // 0x224208: 0xae700000
    ctx->pc = 0x224208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x22420c: 0x26310001
    ctx->pc = 0x22420cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x224210: 0x70009628
    ctx->pc = 0x224210u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224214: 0x1000001c
    ctx->pc = 0x224214u;
    {
        const bool branch_taken_0x224214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224218u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224214) {
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x22421Cu;
    // 0x22421c: 0x70008628
    ctx->pc = 0x22421cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_224220:
    // 0x224220: 0x1000001a
    ctx->pc = 0x224220u;
    {
        const bool branch_taken_0x224220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224224u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x224220) {
            ctx->pc = 0x22428Cu;
            goto label_22428c;
        }
    }
    ctx->pc = 0x224228u;
    // 0x224228: 0x24430005
    ctx->pc = 0x224228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 5));
label_22422c:
    // 0x22422c: 0x2c610002
    ctx->pc = 0x22422cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x224230: 0x14200015
    ctx->pc = 0x224230u;
    {
        const bool branch_taken_0x224230 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x224234u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 119));
        if (branch_taken_0x224230) {
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x224238u;
    // 0x224238: 0x54430004
    ctx->pc = 0x224238u;
    {
        const bool branch_taken_0x224238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x224238) {
            ctx->pc = 0x22423Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x22424Cu;
            goto label_22424c;
        }
    }
    ctx->pc = 0x224240u;
    // 0x224240: 0x10000003
    ctx->pc = 0x224240u;
    {
        const bool branch_taken_0x224240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224244u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x224240) {
            ctx->pc = 0x224250u;
            goto label_224250;
        }
    }
    ctx->pc = 0x224248u;
    // 0x224248: 0x26520001
    ctx->pc = 0x224248u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_22424c:
    // 0x22424c: 0x0
    ctx->pc = 0x22424cu;
    // NOP
label_224250:
    // 0x224250: 0x26100001
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x224254: 0x217182a
    ctx->pc = 0x224254u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 23)));
    // 0x224258: 0x1460000b
    ctx->pc = 0x224258u;
    {
        const bool branch_taken_0x224258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x22425Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 117));
        if (branch_taken_0x224258) {
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x224260u;
    // 0x224260: 0x10430009
    ctx->pc = 0x224260u;
    {
        const bool branch_taken_0x224260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x224264u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 118));
        if (branch_taken_0x224260) {
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x224268u;
    // 0x224268: 0x10430007
    ctx->pc = 0x224268u;
    {
        const bool branch_taken_0x224268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x22426Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x224268) {
            ctx->pc = 0x224288u;
            goto label_224288;
        }
    }
    ctx->pc = 0x224270u;
    // 0x224270: 0xae620000
    ctx->pc = 0x224270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x224274: 0x121040
    ctx->pc = 0x224274u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x224278: 0x26310001
    ctx->pc = 0x224278u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22427c: 0x2a2a823
    ctx->pc = 0x22427cu;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x224280: 0x70009628
    ctx->pc = 0x224280u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x224284: 0x70008628
    ctx->pc = 0x224284u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_224288:
    // 0x224288: 0x26b50002
    ctx->pc = 0x224288u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
label_22428c:
    // 0x22428c: 0x0
    ctx->pc = 0x22428cu;
    // NOP
label_224290:
    // 0x224290: 0x82a20000
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x224294: 0x1440ffcf
    ctx->pc = 0x224294u;
    {
        const bool branch_taken_0x224294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224298u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x224294) {
            ctx->pc = 0x2241D4u;
            goto label_2241d4;
        }
    }
    ctx->pc = 0x22429Cu;
    // 0x22429c: 0x72201628
    ctx->pc = 0x22429cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2242a0: 0x7bbf0080
    ctx->pc = 0x2242a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2242a4: 0x7bb70070
    ctx->pc = 0x2242a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2242a8: 0x7bb60060
    ctx->pc = 0x2242a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2242ac: 0x7bb50050
    ctx->pc = 0x2242acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2242b0: 0x7bb40040
    ctx->pc = 0x2242b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2242b4: 0x7bb30030
    ctx->pc = 0x2242b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2242b8: 0x7bb20020
    ctx->pc = 0x2242b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2242bc: 0x7bb10010
    ctx->pc = 0x2242bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2242c0: 0x7bb00000
    ctx->pc = 0x2242c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2242c4: 0x3e00008
    ctx->pc = 0x2242C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2242C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2241D4u: goto label_2241d4;
            case 0x224200u: goto label_224200;
            case 0x224220u: goto label_224220;
            case 0x22422Cu: goto label_22422c;
            case 0x22424Cu: goto label_22424c;
            case 0x224250u: goto label_224250;
            case 0x224288u: goto label_224288;
            case 0x22428Cu: goto label_22428c;
            case 0x224290u: goto label_224290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2242CCu;
}
