#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_fp_from_fname
// Address: 0x1781f0 - 0x1782bc
void get_fp_from_fname_0x1781f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_fp_from_fname");


    ctx->pc = 0x1781f0u;

    // 0x1781f0: 0x27bdff80
    ctx->pc = 0x1781f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1781f4: 0xffb60060
    ctx->pc = 0x1781f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1781f8: 0xffb40040
    ctx->pc = 0x1781f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1781fc: 0xa0b02d
    ctx->pc = 0x1781fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178200: 0xffb30030
    ctx->pc = 0x178200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x178204: 0xe0a02d
    ctx->pc = 0x178204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178208: 0xffb20020
    ctx->pc = 0x178208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17820c: 0xc0982d
    ctx->pc = 0x17820cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178210: 0xffb00000
    ctx->pc = 0x178210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178214: 0x80902d
    ctx->pc = 0x178214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178218: 0xffbf0070
    ctx->pc = 0x178218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17821c: 0x802d
    ctx->pc = 0x17821cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178220: 0xffb50050
    ctx->pc = 0x178220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x178224: 0x1a800019
    ctx->pc = 0x178224u;
    {
        const bool branch_taken_0x178224 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x178228u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x178224) {
            ctx->pc = 0x17828Cu;
            goto label_17828c;
        }
    }
    ctx->pc = 0x17822Cu;
    // 0x17822c: 0x3c150024
    ctx->pc = 0x17822cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x178230: 0x26a49f08
    ctx->pc = 0x178230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294942472));
    // 0x178234: 0x0
    ctx->pc = 0x178234u;
    // NOP
label_178238:
    // 0x178238: 0x1010c0
    ctx->pc = 0x178238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x17823c: 0x8c83000c
    ctx->pc = 0x17823cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x178240: 0x2628821
    ctx->pc = 0x178240u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x178244: 0x8c850008
    ctx->pc = 0x178244u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x178248: 0x701018
    ctx->pc = 0x178248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17824c: 0x2c0202d
    ctx->pc = 0x17824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178250: 0x528c0
    ctx->pc = 0x178250u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x178254: 0x501821
    ctx->pc = 0x178254u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178258: 0xa32821
    ctx->pc = 0x178258u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17825c: 0xc05df76
    ctx->pc = 0x17825Cu;
    SET_GPR_U32(ctx, 31, 0x178264u);
    ctx->pc = 0x178260u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->pc = 0x177DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_stricmp_0x177dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178264u; }
        else if (ctx->pc != 0x178264u) { ctx->pc = 0x178264u; }
    }
    if (ctx->pc != 0x178264u) { return; }
    ctx->pc = 0x178264u;
    // 0x178264: 0x14400006
    ctx->pc = 0x178264u;
    {
        const bool branch_taken_0x178264 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178268u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x178264) {
            ctx->pc = 0x178280u;
            goto label_178280;
        }
    }
    ctx->pc = 0x17826Cu;
    // 0x17826c: 0x8e220000
    ctx->pc = 0x17826cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178270: 0xae420000
    ctx->pc = 0x178270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x178274: 0x8e230004
    ctx->pc = 0x178274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178278: 0x10000006
    ctx->pc = 0x178278u;
    {
        const bool branch_taken_0x178278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17827Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x178278) {
            ctx->pc = 0x178294u;
            goto label_178294;
        }
    }
    ctx->pc = 0x178280u;
label_178280:
    // 0x178280: 0x214102a
    ctx->pc = 0x178280u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
    // 0x178284: 0x1440ffec
    ctx->pc = 0x178284u;
    {
        const bool branch_taken_0x178284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178288u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294942472));
        if (branch_taken_0x178284) {
            ctx->pc = 0x178238u;
            goto label_178238;
        }
    }
    ctx->pc = 0x17828Cu;
label_17828c:
    // 0x17828c: 0xae400004
    ctx->pc = 0x17828cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x178290: 0xae400000
    ctx->pc = 0x178290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_178294:
    // 0x178294: 0xdfbf0070
    ctx->pc = 0x178294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178298: 0xdfb60060
    ctx->pc = 0x178298u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17829c: 0xdfb50050
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1782a0: 0xdfb40040
    ctx->pc = 0x1782a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1782a4: 0xdfb30030
    ctx->pc = 0x1782a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1782a8: 0xdfb20020
    ctx->pc = 0x1782a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1782ac: 0xdfb10010
    ctx->pc = 0x1782acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1782b0: 0xdfb00000
    ctx->pc = 0x1782b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1782b4: 0x3e00008
    ctx->pc = 0x1782B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178238u: goto label_178238;
            case 0x178280u: goto label_178280;
            case 0x17828Cu: goto label_17828c;
            case 0x178294u: goto label_178294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1782BCu;
}
