#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryGrpSE__13SoundMgrClassFPSc
// Address: 0x218260 - 0x218434
void entryGrpSE__13SoundMgrClassFPSc_0x218260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryGrpSE__13SoundMgrClassFPSc");


    ctx->pc = 0x218260u;

    // 0x218260: 0x27bdfe60
    ctx->pc = 0x218260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x218264: 0x7fbf0090
    ctx->pc = 0x218264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x218268: 0x7fbe0080
    ctx->pc = 0x218268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21826c: 0x7fb70070
    ctx->pc = 0x21826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x218270: 0x7fb60060
    ctx->pc = 0x218270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x218274: 0x7fb50050
    ctx->pc = 0x218274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x218278: 0x7fb40040
    ctx->pc = 0x218278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21827c: 0x7fb30030
    ctx->pc = 0x21827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x218280: 0x70a0be28
    ctx->pc = 0x218280u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x218284: 0x7fb20020
    ctx->pc = 0x218284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218288: 0x70802e28
    ctx->pc = 0x218288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21828c: 0x7fb10010
    ctx->pc = 0x21828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218290: 0x27a400a0
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x218294: 0x24060040
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x218298: 0xc06ac24
    ctx->pc = 0x218298u;
    SET_GPR_U32(ctx, 31, 0x2182A0u);
    ctx->pc = 0x21829Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AB090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB090_0x1ab090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182A0u; }
        else if (ctx->pc != 0x2182A0u) { ctx->pc = 0x2182A0u; }
    }
    if (ctx->pc != 0x2182A0u) { return; }
    ctx->pc = 0x2182A0u;
    // 0x2182a0: 0x10000056
    ctx->pc = 0x2182A0u;
    {
        const bool branch_taken_0x2182a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2182A4u;
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        if (branch_taken_0x2182a0) {
            ctx->pc = 0x2183FCu;
            goto label_2183fc;
        }
    }
    ctx->pc = 0x2182A8u;
label_2182a8:
    // 0x2182a8: 0x1220c0
    ctx->pc = 0x2182a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 3));
    // 0x2182ac: 0x2463af40
    ctx->pc = 0x2182acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946624));
    // 0x2182b0: 0x642021
    ctx->pc = 0x2182b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2182b4: 0x84830000
    ctx->pc = 0x2182b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2182b8: 0x8c9e0004
    ctx->pc = 0x2182b8u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2182bc: 0x84910002
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2182c0: 0x318c0
    ctx->pc = 0x2182c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2182c4: 0x7d1821
    ctx->pc = 0x2182c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2182c8: 0x247300a0
    ctx->pc = 0x2182c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 160));
    // 0x2182cc: 0x8e630004
    ctx->pc = 0x2182ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2182d0: 0x17c30005
    ctx->pc = 0x2182D0u;
    {
        const bool branch_taken_0x2182d0 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 3));
        ctx->pc = 0x2182D4u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x2182d0) {
            ctx->pc = 0x2182E8u;
            goto label_2182e8;
        }
    }
    ctx->pc = 0x2182D8u;
    // 0x2182d8: 0x86630002
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2182dc: 0x52230045
    ctx->pc = 0x2182DCu;
    {
        const bool branch_taken_0x2182dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x2182dc) {
            ctx->pc = 0x2182E0u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
            ctx->pc = 0x2183F4u;
            goto label_2183f4;
        }
    }
    ctx->pc = 0x2182E4u;
    // 0x2182e4: 0x0
    ctx->pc = 0x2182e4u;
    // NOP
label_2182e8:
    // 0x2182e8: 0x70008628
    ctx->pc = 0x2182e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2182ec: 0x27b400a0
    ctx->pc = 0x2182ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 160));
label_2182f0:
    // 0x2182f0: 0x86850002
    ctx->pc = 0x2182f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2182f4: 0x56250009
    ctx->pc = 0x2182F4u;
    {
        const bool branch_taken_0x2182f4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 5));
        if (branch_taken_0x2182f4) {
            ctx->pc = 0x2182F8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x21831Cu;
            goto label_21831c;
        }
    }
    ctx->pc = 0x2182FCu;
    // 0x2182fc: 0x3c020051
    ctx->pc = 0x2182fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x218300: 0xc0866e0
    ctx->pc = 0x218300u;
    SET_GPR_U32(ctx, 31, 0x218308u);
    ctx->pc = 0x218304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeSndPack__13EntryDatClassFi_0x219b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218308u; }
        else if (ctx->pc != 0x218308u) { ctx->pc = 0x218308u; }
    }
    if (ctx->pc != 0x218308u) { return; }
    ctx->pc = 0x218308u;
    // 0x218308: 0xae800004
    ctx->pc = 0x218308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x21830c: 0x2402ffff
    ctx->pc = 0x21830cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218310: 0xa6820002
    ctx->pc = 0x218310u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x218314: 0x0
    ctx->pc = 0x218314u;
    // NOP
    // 0x218318: 0x26100001
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21831c:
    // 0x21831c: 0x2a020020
    ctx->pc = 0x21831cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
    // 0x218320: 0x1440fff3
    ctx->pc = 0x218320u;
    {
        const bool branch_taken_0x218320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x218324u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x218320) {
            ctx->pc = 0x2182F0u;
            goto label_2182f0;
        }
    }
    ctx->pc = 0x218328u;
    // 0x218328: 0x8ec20000
    ctx->pc = 0x218328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21832c: 0x1040000a
    ctx->pc = 0x21832Cu;
    {
        const bool branch_taken_0x21832c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21832c) {
            ctx->pc = 0x218358u;
            goto label_218358;
        }
    }
    ctx->pc = 0x218334u;
    // 0x218334: 0x86650002
    ctx->pc = 0x218334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x218338: 0x3c020051
    ctx->pc = 0x218338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21833c: 0x244437a0
    ctx->pc = 0x21833cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x218340: 0xc0866e0
    ctx->pc = 0x218340u;
    SET_GPR_U32(ctx, 31, 0x218348u);
    ctx->pc = 0x218344u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x219B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeSndPack__13EntryDatClassFi_0x219b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218348u; }
        else if (ctx->pc != 0x218348u) { ctx->pc = 0x218348u; }
    }
    if (ctx->pc != 0x218348u) { return; }
    ctx->pc = 0x218348u;
    // 0x218348: 0xaec00000
    ctx->pc = 0x218348u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x21834c: 0x2402ffff
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218350: 0xa6020000
    ctx->pc = 0x218350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x218354: 0x0
    ctx->pc = 0x218354u;
    // NOP
label_218358:
    // 0x218358: 0x3c020091
    ctx->pc = 0x218358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)145 << 16));
    // 0x21835c: 0x121880
    ctx->pc = 0x21835cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x218360: 0x24421a40
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6720));
    // 0x218364: 0x431021
    ctx->pc = 0x218364u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218368: 0x10000017
    ctx->pc = 0x218368u;
    {
        const bool branch_taken_0x218368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21836Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x218368) {
            ctx->pc = 0x2183C8u;
            goto label_2183c8;
        }
    }
    ctx->pc = 0x218370u;
    // 0x218370: 0x218c0
    ctx->pc = 0x218370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_218374:
    // 0x218374: 0x3c020029
    ctx->pc = 0x218374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218378: 0x2442af40
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x21837c: 0x431821
    ctx->pc = 0x21837cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218380: 0x84620000
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218384: 0x210c0
    ctx->pc = 0x218384u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x218388: 0x5d1021
    ctx->pc = 0x218388u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21838c: 0x244400a0
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
    // 0x218390: 0x8c630004
    ctx->pc = 0x218390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x218394: 0x8c820004
    ctx->pc = 0x218394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x218398: 0x14620009
    ctx->pc = 0x218398u;
    {
        const bool branch_taken_0x218398 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21839Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x218398) {
            ctx->pc = 0x2183C0u;
            goto label_2183c0;
        }
    }
    ctx->pc = 0x2183A0u;
    // 0x2183a0: 0x84850002
    ctx->pc = 0x2183a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2183a4: 0x24950002
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 4), 2));
    // 0x2183a8: 0x3c020051
    ctx->pc = 0x2183a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2183ac: 0xc0866e0
    ctx->pc = 0x2183ACu;
    SET_GPR_U32(ctx, 31, 0x2183B4u);
    ctx->pc = 0x2183B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeSndPack__13EntryDatClassFi_0x219b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183B4u; }
        else if (ctx->pc != 0x2183B4u) { ctx->pc = 0x2183B4u; }
    }
    if (ctx->pc != 0x2183B4u) { return; }
    ctx->pc = 0x2183B4u;
    // 0x2183b4: 0xae800000
    ctx->pc = 0x2183b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2183b8: 0x2402ffff
    ctx->pc = 0x2183b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2183bc: 0xa6a20000
    ctx->pc = 0x2183bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_2183c0:
    // 0x2183c0: 0x26100001
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2183c4: 0x0
    ctx->pc = 0x2183c4u;
    // NOP
label_2183c8:
    // 0x2183c8: 0x82020000
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2183cc: 0x441ffe9
    ctx->pc = 0x2183CCu;
    {
        const bool branch_taken_0x2183cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2183D0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x2183cc) {
            ctx->pc = 0x218374u;
            goto label_218374;
        }
    }
    ctx->pc = 0x2183D4u;
    // 0x2183d4: 0x3c020051
    ctx->pc = 0x2183d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2183d8: 0x72402e28
    ctx->pc = 0x2183d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2183dc: 0xc0866d0
    ctx->pc = 0x2183DCu;
    SET_GPR_U32(ctx, 31, 0x2183E4u);
    ctx->pc = 0x2183E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entrySndPack__13EntryDatClassFi_0x219b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183E4u; }
        else if (ctx->pc != 0x2183E4u) { ctx->pc = 0x2183E4u; }
    }
    if (ctx->pc != 0x2183E4u) { return; }
    ctx->pc = 0x2183E4u;
    // 0x2183e4: 0xaede0000
    ctx->pc = 0x2183e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 30));
    // 0x2183e8: 0xa6710002
    ctx->pc = 0x2183e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x2183ec: 0x0
    ctx->pc = 0x2183ecu;
    // NOP
    // 0x2183f0: 0x26f70001
    ctx->pc = 0x2183f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_2183f4:
    // 0x2183f4: 0x0
    ctx->pc = 0x2183f4u;
    // NOP
    // 0x2183f8: 0x82f20000
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_2183fc:
    // 0x2183fc: 0x641ffaa
    ctx->pc = 0x2183FCu;
    {
        const bool branch_taken_0x2183fc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x218400u;
        SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
        if (branch_taken_0x2183fc) {
            ctx->pc = 0x2182A8u;
            goto label_2182a8;
        }
    }
    ctx->pc = 0x218404u;
    // 0x218404: 0x7bbf0090
    ctx->pc = 0x218404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218408: 0x7bbe0080
    ctx->pc = 0x218408u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21840c: 0x7bb70070
    ctx->pc = 0x21840cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218410: 0x7bb60060
    ctx->pc = 0x218410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218414: 0x7bb50050
    ctx->pc = 0x218414u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218418: 0x7bb40040
    ctx->pc = 0x218418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21841c: 0x7bb30030
    ctx->pc = 0x21841cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218420: 0x7bb20020
    ctx->pc = 0x218420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218424: 0x7bb10010
    ctx->pc = 0x218424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218428: 0x7bb00000
    ctx->pc = 0x218428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21842c: 0x3e00008
    ctx->pc = 0x21842Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2182A8u: goto label_2182a8;
            case 0x2182E8u: goto label_2182e8;
            case 0x2182F0u: goto label_2182f0;
            case 0x21831Cu: goto label_21831c;
            case 0x218358u: goto label_218358;
            case 0x218374u: goto label_218374;
            case 0x2183C0u: goto label_2183c0;
            case 0x2183C8u: goto label_2183c8;
            case 0x2183F4u: goto label_2183f4;
            case 0x2183FCu: goto label_2183fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218434u;
}
